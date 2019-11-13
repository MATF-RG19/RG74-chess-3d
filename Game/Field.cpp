#include "Field.h"

// default constructor that sets field value to null
Field::Field() {
  occupyingPiece = NULL;
}

// copy constructor that copies the value of existing field into specific field
Field::Field(const Field &Field) {
  this->(occupyingChessBoardPiece) = Field.(occupyingChessBoardPiece);
}

// check if there is a figure on this field
bool Field::isFieldOccupied() {
  return occupyingChessBoardPiece == NULL ? false : true;
}

// move figure on this field and return true
// or return false, if a field is occupied
bool Field::occupyField(ChessBoardPiece *piece) {
  if(isFieldOccupied()) {
    return false;
  }
  else{
    occupyingChessBoardPiece = piece;
    return true;
  }
}

// remove figure from specific field and set field value to null
ChessBoardPiece *Field::removeOccupyingChessBoardPiece() {
  ChessBoardPiece *toBeRemoved = occupyingChessBoardPiece;
  occupyingChessBoardPiece = NULL;
  return toBeRemoved;
}

// return value of specific field
ChessBoardPiece *Field::getOccupyingChessBoardPiece() {
  return occupyingChessBoardPiece;
}
