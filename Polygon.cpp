// Example Project
// Author: Jake Lane
// Student ID: a1686679
// Description: Polygon class

#include "Polygon.hpp"

// Constructor for Polygon
Polygon::Polygon(int height, int width): m_height(height), m_width(width) {}

// Destructor
Polygon::~Polygon() {}

// Return the polygon height
int Polygon::getHeight() {
	return m_height;
}

// Return the polygon width
int Polygon::getWidth() {
	return m_width;
}

// Set the polygon height
void Polygon::setHeight(int height) {
	m_height = height;
}

// Set the polygon width
void Polygon::setWidth(int width) {
	m_width = width;
}

// This runs if there is no child class (polymorphism) so we return an invalid area
float Polygon::area() {
	return -1;
}
