//Main

#include <iostream>
#include <vector>
#include "Piece.h"

int main()
{
    //Fill vector with 15 pieces
    Piece my_map[4][4];
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            Piece buffer(1,1,1,1,(i*4)+j);
            my_map[i][j] = buffer;
        }
    }
    //Show vector with pieces
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            std::cout<<my_map[i][j].num;
        }
        std::cout<<std::endl;
    }
    
    return 0;
}