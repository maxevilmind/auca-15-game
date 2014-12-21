#include "Random.h"

Random::Random()
{
	srand (time(NULL));
}
void Random::Randomize(Piece field[][4], Game& ag)
{
	ag.GetEmptyPiece();
	srand(rand());
	int rnd_buf = rand()%10;

	if(rnd_buf == 1)
	{
		if (ag.EmptyPiece_i != 3)
    	{
    		ag.Swap(ag.my_map[ag.EmptyPiece_i+1][ag.EmptyPiece_j]);
    	}
    } else
    if(rnd_buf == 2)
	{
		if (ag.EmptyPiece_i != 0)
    	{
    		ag.Swap(ag.my_map[ag.EmptyPiece_i-1][ag.EmptyPiece_j]);
    	}
    } else
    if(rnd_buf == 3)
	{
		if (ag.EmptyPiece_i != 3)
    	{
    		ag.Swap(ag.my_map[ag.EmptyPiece_i][ag.EmptyPiece_j+1]);
    	}
    } else
    if(rnd_buf == 4)
	{
		if (ag.EmptyPiece_i != 0)
    	{
    		ag.Swap(ag.my_map[ag.EmptyPiece_i][ag.EmptyPiece_j-1]);
    	}
    }
}