//Main

#include <iostream>
#include <vector>
#include "Piece.h"
#include "Game.h"
#include "Drawer.h"

int main()
{
    Game g;
    Drawer d;
    g.GetEmptyPiece();
    g.Swap(g.my_map[2][2]);
    d.DrawField(g.my_map);

    //Show vector with pieces
    return 0;
}