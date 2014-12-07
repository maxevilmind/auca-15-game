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
    // for (int i = 0; i < 4; ++i)
    // {
    //     for (int j = 0; j < 4; ++j)
    //     {
    //         std::cout<<field[i][j].num;
    //     }
    //     std::cout<<std::endl;
    // }
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
        //temp.setTexture(piece_textures[7]);
        window.clear();
	    for (int i = 0; i < 4; ++i)
	    {
	        for (int j = 0; j < 4; ++j)
	        {
	        	temp.setTexture(piece_textures[i+(j*4)]);
	        	temp.setPosition(i*100,j*100);
	            window.draw(temp);	            
	        }
	    }
        window.display();
    }

}