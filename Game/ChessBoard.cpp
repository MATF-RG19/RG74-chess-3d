#include "ChessBoard.h"

// default constructor
ChessBoard::ChessBoard() {

}

// copy constructor
ChessBoard::ChessBoard(ChessBoard &board) {
  for(int row = 0 ; row < 8 ; row++) {
    for(int column = 0 ; column < 8 ; column++) {
      this->(fields[row][column]) = board.(fields[row][column]);
    }
  }
}

// get specific field
Field *ChessBoard::getField(int row, int column) {
  return &fields[row][column];
}

// default destructor
~ChessBoard::ChessBoard() {

}
