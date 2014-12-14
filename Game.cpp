#include "Game.h"

Game::Game()
{
	//Fill vector with 15 pieces
    
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            Piece buffer(1,1,1,1,(i*4)+j);
            my_map[i][j] = buffer;
        }
    }

    //Give coordinates
    for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			my_map[i][j].pos_x=i*100;
			my_map[i][j].pos_y=j*100;

		}
	}
}
void Game::GetEmptyPiece()
{
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{ 
			if(my_map[i][j].num == 0)
			{
				EmptyPiece_i = i;
				EmptyPiece_j = j;
				break;
			}
		}
	}
}
void Game::Swap(Piece& ToBeSwaped) // Pass pointer on piece we want to move
{
	Piece buffer(0,0,0,0,0);
	buffer.num = ToBeSwaped.num;
	ToBeSwaped.num = my_map[EmptyPiece_i][EmptyPiece_j].num;
	my_map[EmptyPiece_i][EmptyPiece_j].num = buffer.num;
}