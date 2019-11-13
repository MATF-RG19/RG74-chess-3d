#include "ChessBoardPiece.h"

ChessBoardPiece::ChessBoardPiece(ChessBoardPieceType type, ChessBoardPieceColor color) {
  _type = type;
  _color = color;
}

ChessBoardPiece::ChessBoardPiece(ChessBoardPiece &piece) {
  this->(_type) = piece.(_type);
  this->(_color) = piece.(_color);
}

ChessBoardPieceType ChessBoardPiece::getChessBoardPieceType() {
  return _type;
}

ChessBoardPieceColor ChessBoardPiece::getChessBoardPieceColor() {
  return _color;
}
