//Main
#include <iostream>
#include <vector>
#include "Piece.h"

int main()
{
    //Fill vector with 15 pieces
    std::vector<Piece> myPieces;
    for (int i = 0; i < 15; ++i)
    {
       Piece myPiece(1,1,1,1,i+1);
       myPieces.push_back(myPiece);
    }

    //Show vector with pieces
    for (int i = 0; i < 15; ++i)
    {
        std::cout << "x is " << myPieces[i].num << std::endl;
    }
    
    return 0;
}