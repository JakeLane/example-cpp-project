// Example Project
// Author: Jake Lane
// Student ID: a1686679
// Description: Polygon class

#include "Polygon.h"

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

// Returns the area. NOTE: This is a polymorphic function, and individual classes might have their own implementation.
int Polygon::area()
{
	return m_height * m_height;
}
