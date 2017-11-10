#include <iostream>

#include "sudokuboard.h"

using namespace std;

// Initialize the board without any values
sudokuboard::sudokuboard(){
  for(int i = 0; i < DIM; i++){
    for(int j = 0; j < DIM; j++) board[i][j] = 0;
  }
}

// Initialize the board with a 2D char array
sudokuboard::sudokuboard(char b[DIM][DIM]){
  for(int i = 0; i < DIM; i++){
    for(int j = 0; j < DIM; j++) board[i][j] = *(*(b + i) + j);
  }
}

// Initialize the board with a string array
sudokuboard::sudokuboard(std::string b[DIM]){
  for(int i = 0; i < DIM; i++) strcpy(board[i],  b[i].c_str());
}

// Place numeral n at position (r, c)
void sudokuboard::place(int r, int c, int n){
  board[r][c] = '0' + n;
}

// Write the board to cout
void sudokuboard::print(){
  for(int i = 0; i < DIM; i++){
    for(int j = 0; j < DIM; j++){
      cout << board[i][j];
    }
    cout << endl;
  }
}

// Return the numeral at position (r, c)
char sudokuboard::get(int r, int c){
  return board[r][c];
}

// Remove the numeral at position (r, c)
void sudokuboard::remove(int r, int c){
  board[r][c] = '_';
}

// Return true if the board would allow placing n at position (r, c)
bool sudokuboard::canPlace(int r, int c, int n){

  // Check row/column
  for(int i = 0; i < DIM; i++){
    if(board[r][i] == ('0' + n))
      return false;
    if(board[i][c] == ('0' + n))
      return false;
  }

  // Check the box
  r -= r % 3; c -= c % 3;
  for(int i = r; i < r + 3; i++){
    for(int j = c; j < c + 3; j++){
      if(board[i][j] == '0' + n)
      	return false;
    }
  }
  return true;
}

// Return true if there are no blank spaces on the board
bool sudokuboard::solved(){
  for(int i = 0; i < DIM; i++){
    for(int j = 0; j < DIM; j++){
      if(board[i][j] == '_')
	return false;
    }
  }
  return true;
}
