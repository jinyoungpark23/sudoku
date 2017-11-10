/**
 * stack.h
 * Jinyoung Park
 * Data Structure, September 22nd, 2017
 */

#include <cstdlib>

typedef int StackItem;

class stack{
  
  private:

  // Node is consisted of a certain type of data and a pointer to the next node
struct node{
  
  StackItem data;
  node* next;
  
};
  size_t _size;
  node* _top;
  
 public:

  // Constructor/destructor
  stack();
  ~stack();

  // Places d in a node at the top of the stack
  void push(StackItem d);

  // Removes and deletes the top node of the stack
  void pop();

  // Returns the value stored in the top node
  StackItem top() const;

  // Returns the size of the stack
  size_t size() const;

  // Returns a boolean value - whether the stack is empty
  bool empty() const;

  // Prints out a representation of the stack
  void print() const;
 
};
