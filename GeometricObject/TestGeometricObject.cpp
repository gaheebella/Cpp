#include "GeometricObject.h"
#include "DerivedCircle.h"
#include "DerivedRectangle.h"
#include <iostream>
using namespace std;

int main()
{
	//Geometric Object ��ü ����
	GeometricObject shape; 
	shape.setColor("red"); //����
	shape.setFilled(true);

	cout << shape.toString() << endl //"Geometric Object"
		<< " color: " << shape.getColor() //����
		<< " filled: " << (shape.isFilled() ? "true" : "false") << endl;


	//Circle ��ü ����
	Circle circle(5); 
	circle.setColor("black");
	circle.setFilled(false);

	cout << circle.toString() << endl //"Circle Object"
		<< " color: " << circle.getColor() //����
		<< " filled: " << (circle.isFilled() ? "true" : "false")
		<< " radius: " << circle.getRadius()
		<< " area: " << circle.getArea()
		<< " perimeter: " << circle.getPerimeter() << endl;

	
	//Rectangle ��ü ���� (��, ����)
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