#ifndef CHESSBOARDPIECE_H
#define CHESSBOARDPIECE_H

#include "ChessBoardPieceType.h"
#include "ChessBoardPieceColor.h"

// every piece has it's color and to every piece
// can be 'assigned' a figure
class ChessBoardPiece {

public:
  ChessBoardPiece(ChessBoardPieceType type, ChessBoardPieceColor color);
  ChessBoardPiece(const ChessBoardPiece &piece);
  ChessBoardPieceType getChessBoardPieceType();
  ChessBoardPieceColor getChessBoardPieceColor();

private:
  ChessBoardPieceType _type;
  ChessBoardPieceColor _color;
};


#endif
