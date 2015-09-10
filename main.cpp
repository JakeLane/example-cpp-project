// Example Project
// Author: Jake Lane
// Student ID: a1686679
// Description: Main Program

#include <iostream>

#include "Polygon.h"
#include "Square.h"
#include "Triangle.h"

int main() {
	// Create a square on the heap with a height of 5 and a width of 6
	Polygon* square = new Square(5, 6);
	// Print information using getters and method
	std::cout << "Height: " << square->getHeight() << ", Width: " << square->getHeight() << ", Area: " << square->area() << std::endl;
	// Set the height to 10 with a setter
	square->setHeight(10);
	// Set the width to 10 with a setter
	square->setWidth(10);
	// Print information using getters and method
	std::cout << "Height: " << square->getHeight() << ", Width: " << square->getHeight() << ", Area: " << square->area() << std::endl;
	// Cleanup the memory in the heap
	delete square;

	// Create a triangle on the heap with a height of 7 and a width of 8
	Polygon* triangle = new Triangle(7, 8);
	// Print information using getters and method
	std::cout << "Height: " << triangle->getHeight() << ", Width: " << triangle->getHeight() << ", Area: " << triangle->area() << std::endl;
	// Set the height to 3 with a setter
	triangle->setHeight(3);
	// Set the width to 4 with a setter
	triangle->setWidth(4);
	// Print information using getters and method
	std::cout << "Height: " << triangle->getHeight() << ", Width: " << triangle->getHeight() << ", Area: " << triangle->area() << std::endl;
	delete triangle;

	return 0;
}