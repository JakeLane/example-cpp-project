// Example Project
// Author: Jake Lane
// Student ID: a1686679
// Description: Triangle header

#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include "Polygon.h"

class Triangle: public Polygon {
public:
	// Constructor
	Triangle(int height, int width);
	// Trivial Destructor
	~Triangle();

	// Area method (polymorphic)
	int area();
};

#endif  // TRIANGLE_H_