// Example Project
// Author: Jake Lane
// Student ID: a1686679
// Description: Polygon header

#ifndef POLYGON_H_
#define POLYGON_H_

class Polygon {
public:
	// Constructor
	Polygon(int height, int width);
	// Destructor
	~Polygon();
	
	// Getters
	int getHeight();
	int getWidth();

	// Setters
	void setHeight(int height);
	void setWidth(int width);

	// Virtual area method
	virtual float area();

protected:
	// Member variables
	int m_height;
	int m_width;
};

#endif // POLYGON_H_
