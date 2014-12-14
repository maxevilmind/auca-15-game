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
    for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			my_map[i][j].pos_x=i*100;
			my_map[i][j].pos_y=j*100;

		}
	}
}
void Game::GetEmptyCoordinates()
{

}