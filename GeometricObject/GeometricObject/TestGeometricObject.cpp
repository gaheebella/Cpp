#include "GeometricObject.h"
#include "DerivedCircle.h"
#include "DerivedRectangle.h"
#include "DerivedTriangle.h"
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

	cout << "\n" << circle.toString() << endl //"Circle Object"
		<< " color: " << circle.getColor() //����
		<< " filled: " << (circle.isFilled() ? "true" : "false")
		<< " radius: " << circle.getRadius()
		<< " area: " << circle.getArea()
		<< " perimeter: " << circle.getPerimeter() << endl;


	
	//Rectangle ��ü ���� (��, ����)
	Rectangle rectangle(2, 3); 
	rectangle.setColor("green");
	rectangle.setFilled(true);


	cout << "\n" << rectangle.toString() << endl //"Rectangle Object"
		<< " color: " << rectangle.getColor()
		<< " filled: " << (rectangle.isFilled() ? "true" : "false")
		<< " width: " << rectangle.getWidth()
		<< " height: " << rectangle.getHeight()
		<< " area: " << rectangle.getArea()
		<< " perimeter: " << rectangle.getPerimeter() << endl;



	//Triangle ��ü ���� (side1, side2, side3)
	Triangle triangle;
	double side1, side2, side3;
	string color;
	bool filled;
	int filledInput;

	cout << "\n" << triangle.toString() << endl
		<<"�ﰢ���� �� ���� ����, ����, �ﰢ���� ä�����ִ���(ä����:1, �� ä����:0) " << "\n" << "�Է�: ";
	cin >> side1 >> side2 >> side3 >> color >> filledInput;
	triangle.setSide1(side1);
	triangle.setSide2(side2);
	triangle.setSide3(side3);
	triangle.setColor(color);
	filled = ((filledInput == 1) ? "true" : "false");
	triangle.setFilled(filled);

	cout << triangle.getArea() << " " << triangle.getPerimeter() << " " << triangle.getColor() << " " << (triangle.isFilled() ? "false" : "true") << endl;
	
	return 0;
}