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

    d.DrawField(g.my_map);
    //Show vector with pieces
    return 0;
}