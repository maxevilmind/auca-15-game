//Main

#include <iostream>
#include <vector>
#include "Piece.h"
#include "Game.h"
int main()
{
    Game g;
    //Show vector with pieces
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            std::cout<<g.my_map[i][j].num;
        }
        std::cout<<std::endl;
    }
    
    return 0;
}