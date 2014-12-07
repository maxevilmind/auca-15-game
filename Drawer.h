//Definition
#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Piece.h"
class Drawer
{
public:
Drawer();
void DrawField(Piece field[][4]);	
};