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
void Drawer::DrawField(Piece field[][4])
{
    sf::RenderWindow window(sf::VideoMode(400, 400), "Game15"); // Draw window	
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
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