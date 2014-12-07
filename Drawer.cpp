//Declaration
#include "Drawer.h"

Drawer::Drawer()
{
	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
}
void Drawer::DrawField(Piece field[][4])
{
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            std::cout<<field[i][j].num;
        }
        std::cout<<std::endl;
    }
}