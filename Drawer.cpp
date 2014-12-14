//Declaration
#include "Drawer.h"

Drawer::Drawer()
{
	for (int i = 0; i < 16; ++i)
	{
		sf::Texture texture;
		texture.loadFromFile("sprites/" + std::to_string(i) + ".png");
		piece_textures.push_back(texture);
	}
}
void Drawer::DrawField(Piece field[][4], Game& ag)
{
    sf::RenderWindow window(sf::VideoMode(400, 400), "Game15"); // Draw window	
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::KeyPressed)
            {
                ag.GetEmptyPiece();
                if (event.key.code == sf::Keyboard::Left && ag.EmptyPiece_i != 3)
                {
                    ag.Swap(ag.my_map[ag.EmptyPiece_i+1][ag.EmptyPiece_j]);
                } else if (event.key.code == sf::Keyboard::Right && ag.EmptyPiece_i != 0)
                {
                    ag.Swap(ag.my_map[ag.EmptyPiece_i-1][ag.EmptyPiece_j]);
                } else if (event.key.code == sf::Keyboard::Up && ag.EmptyPiece_j != 3)
                {
                    ag.Swap(ag.my_map[ag.EmptyPiece_i][ag.EmptyPiece_j+1]);
                } else if (event.key.code == sf::Keyboard::Down && ag.EmptyPiece_j != 0)
                {
                    ag.Swap(ag.my_map[ag.EmptyPiece_i][ag.EmptyPiece_j-1]);
                }
            }
        }
        sf::Sprite temp;
        
        //field[0][0].num = 6; check if empty becomes some other 

        window.clear();
	    for (int i = 0; i < 4; ++i)
	    {
	        for (int j = 0; j < 4; ++j)
	        {
	        	//temp.setTexture(piece_textures[i+(j*4)]);
                temp.setTexture(piece_textures[field[i][j].num]);
	        	//temp.setPosition(i*100,j*100);
                temp.setPosition(field[i][j].pos_x, field[i][j].pos_y);
	            window.draw(temp);	            
	        }
	    }
        window.display();
    }

}