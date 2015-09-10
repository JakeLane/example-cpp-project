// Example Project
// Author: Jake Lane
// Student ID: a1686679
// Description: Square class

#include "Square.h"

// Constructor for Square
Square::Square(int height, int width): Polygon(height, width) {}

// Destructor
Square::~Square() {}

int Square::area() {
	return m_height * m_width;
}