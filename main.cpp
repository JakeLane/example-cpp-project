// Example Project
// Author: Jake Lane
// Student ID: a1686679
// Description: Main Program

#include <iostream>

#include "Polygon.h"
#include "Square.h"
#include "Triangle.h"

// Prints out some details on a Polygon.
// Note that it's not passing through a particular Polygon (like Triangle or Square), rather it's the parent.
void printDetails(Polygon* shape)
{
	std::cout << "Height: " << shape->getHeight();
	std::cout << ", Width: " << shape->getWidth();

	// Pay particular attention to the results of area(). Even though it's a Polygon, the children produce different results for the function call.
	std::cout << ", Area: " << shape->area();
	std::cout << std::endl;
}

int main() {
	// Create a square on the heap with a height of 5 and a width of 6
	Polygon* square = new Square(5, 6);
	// Print information using getters and method
	printDetails(square);
	// Set the height to 10 with a setter
	square->setHeight(10);
	// Set the width to 10 with a setter
	square->setWidth(10);
	// Print information using getters and method
	printDetails(square);
	// Cleanup the memory in the heap
	delete square;

	// Create a triangle on the heap with a height of 7 and a width of 8
	Polygon* triangle = new Triangle(7, 8);
	// Print information using getters and method
	printDetails(triangle);
	// Set the height to 3 with a setter
	triangle->setHeight(3);
	// Set the width to 4 with a setter
	triangle->setWidth(4);
	// Print information using getters and method
	printDetails(triangle);
	// Cleanup the memory in the heap
	delete triangle;

	return 0;
}
