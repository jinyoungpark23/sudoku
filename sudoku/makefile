sudoku: sudoku.o sudokuboard.o stack.o
	g++ -o sudoku sudokuboard.o sudoku.o stack.o

sudokuboard.o: sudokuboard.cc sudokuboard.h
	g++ -c sudokuboard.cc

sudoku.o: sudoku.cc sudokuboard.h
	g++ -c sudoku.cc

stack.o: stack.cc stack.h
	g++ -c stack.cc

clean:
	rm -rf sudokuboard.o sudoku.o sudoku
