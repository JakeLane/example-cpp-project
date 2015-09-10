// Example Project
// Author: Jake Lane
// Student ID: a1686679
// Description: Rectangle header

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Polygon.h"

class Rectangle: public Polygon {
public:
	// Constructor
	Rectangle(int height, int width);
	// Trivial Destructor
	~Rectangle();

	// Area method (polymorphic)
	float area();
};

#endif // SQUARE_H_
