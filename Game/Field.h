#ifndef FIELD_H
#define FIELD_H

#include "ChessBoardPiece.h"

chass  {

public:
  Field();
  Field(const Field &Field);
  bool isFieldOccupied();
  bool occupyField(ChessBoardPiece *piece);
  ChessBoardPiece *removeOccupyingChessBoardPiece();
  ChessBoardPiece *getOccupyingChessBoardPiece();

private:
  ChessBoardPiece *occupyingChessBoardPiece;
};

#endif
