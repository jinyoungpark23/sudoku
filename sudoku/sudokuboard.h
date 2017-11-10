/* Jinyoung Park
   sudokuboard.h
   Data Structure
   13 October 2017 */

#define DIM 9

class sudokuboard{

 public:

  // Initialize the board without values
  sudokuboard();

  // Initialize the board with a 2D char array
  sudokuboard(char b[DIM][DIM]);

  // Initialize the board with a string array
  sudokuboard(std::string b[DIM]);

  // Place numeral n at position (r, c)
  void place(int r, int c, int n);

  // Write the board to cout
  void print();

  // Return the numeral at position (r, c)
  char get(int r, int c);

  // Remove the numeral at position (r, c)
  void remove(int r, int c);

  // Return true if the board would allow placing n at position (r, c)
  bool canPlace(int r, int c, int n);

  // Return true if there are no blank spaces on the board
  bool solved();

 private:
  
  char board[DIM][DIM];
  
};
