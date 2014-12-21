//Main

#include <iostream>
#include <vector>
#include "Piece.h"
#include "Game.h"
#include "Drawer.h"
#include "Random.h"

int main()
{
    Game g;
    Drawer d;
    Random r;
    g.GetEmptyPiece();
    for (int i = 0; i < 1000; ++i)
    {
    	r.Randomize(g.my_map, g);
    }
    d.DrawField(g.my_map, g);
    return 0;
}