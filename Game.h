#pragma once
#include "Piece.h"

class Game
{
public:
	Piece my_map[4][4];
	Game();

	void GetEmptyPiece();
	int EmptyPiece_i;
	int EmptyPiece_j;

	void Swap(Piece&);
};