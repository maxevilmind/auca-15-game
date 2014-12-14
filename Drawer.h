//Definition
#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include "Piece.h"
#include <string>
#include "Game.h"

class Drawer
{
public:
	sf::RenderWindow window;
	Drawer();
	void DrawField(Piece field[][4], Game&);
	std::vector<sf::Texture> piece_textures;
};