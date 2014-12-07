//Definition
#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include "Piece.h"
#include <string>

class Drawer
{
public:
	sf::RenderWindow window;
	Drawer();
	void DrawField(Piece field[][4]);
	std::vector<sf::Texture> piece_textures;
};