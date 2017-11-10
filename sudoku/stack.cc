/**
 * stack.cc
 * Jinyoung Park
 * Data Structure, September 22nd, 2017
 */

#include <iostream>
#include "stack.h"

using namespace std;

// Constructor
stack::stack(){
  _size = 0;
  _top = NULL;
}

// Destructor
stack::~stack(){
  while(_top != NULL){
    pop();
  }
}

// Places d in a node at the top of the stack
void stack::push(StackItem d){
  node* n = new node;
  n->next = _top;
  n->data = d;
  _top = n;
  _size++;
}

// Removes and deletes the top node of the stack
void stack::pop(){
  node* t = _top;
  _top = _top->next;
  delete t;
  _size--;
}

// Returns the value stored in the top node
StackItem stack::top() const{
  return _top->data;
}

// Returns the size of the stack
size_t stack::size() const{
  return _size;
}

// Returns a boolean value - whether the stack is empty
bool stack::empty() const{
  if(_top == NULL){
    return true;
  }
  return false;
}

// Prints out a representation of the stack
void stack::print() const{
  node* t = _top;
  std::cout << "[";
  while(t != NULL){
    cout << t->data;
    t = t->next;
    if(t != NULL){
      cout << ", ";
    }
  }
  cout << "]";
}
