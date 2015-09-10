// Example Project
// Author: Jake Lane
// Student ID: a1686679
// Description: Polygon class

#include "Polygon.h"

// Constructor for Polygon
Polygon::Polygon(int height, int width): m_height(height), m_width(width) {}

// Destructor
Polygon::~Polygon() {}

int Polygon::getHeight() {
	return m_height;
}

int Polygon::getWidth() {
	return m_width;
}

void Polygon::setHeight(int height) {
	m_height = height;
}

void Polygon::setWidth(int width) {
	m_width = width;
}