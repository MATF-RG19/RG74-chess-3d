#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include "Field.h"

class ChessBoard {

public:
  Board();
  Board(const Board &board);
  Field *getField(int row, int column);

  ~Board();

private:
  Field fields[8][8];
};

#endif
