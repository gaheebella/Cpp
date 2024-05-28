#include "GeometricObject.h"
#include "DerivedCircle.h"
#include "DerivedRectangle.h"
#include <iostream>
using namespace std;

int main()
{
	//Geometric Object 按眉 积己
	GeometricObject shape; 
	shape.setColor("red"); //函版
	shape.setFilled(true);

	cout << shape.toString() << endl //"Geometric Object"
		<< " color: " << shape.getColor() //立辟
		<< " filled: " << (shape.isFilled() ? "true" : "false") << endl;


	//Circle 按眉 积己
	Circle circle(5); 
	circle.setColor("black");
	circle.setFilled(false);

	cout << circle.toString() << endl //"Circle Object"
		<< " color: " << circle.getColor() //立辟
		<< " filled: " << (circle.isFilled() ? "true" : "false")
		<< " radius: " << circle.getRadius()
		<< " area: " << circle.getArea()
		<< " perimeter: " << circle.getPerimeter() << endl;

	
	//Rectangle 按眉 积己 (气, 臭捞)
	Rectangle rectangle(2, 3); 
	rectangle.setColor("green");
	rectangle.setFilled(true);

	cout << rectangle.toString() << endl //"Rectangle Object"
		<< " color: " << rectangle.getColor()
		<< " filled: " << (rectangle.isFilled() ? "true" : "false")
		<< " width: " << rectangle.getWidth()
		<< " height: " << rectangle.getHeight()
		<< " area: " << rectangle.getArea()
		<< " perimeter: " << rectangle.getPerimeter() << endl;


	return 0;
}