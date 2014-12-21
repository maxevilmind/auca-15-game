#pragma once
#include "Game.h"
#include "Piece.h"
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

class Random
{
public:
	Random();
	void Randomize(Piece field[][4], Game&);

};