// Example Project
// Author: Jake Lane
// Student ID: a1686679
// Description: Square header

#ifndef SQUARE_H_
#define SQUARE_H_

#include "Polygon.h"

class Square: public Polygon {
public:
	// Constructor
	Square(int height, int width);
	// Trivial Destructor
	~Square();

	// Area method (polymorphic)
	int area();
};

#endif  // SQUARE_H_