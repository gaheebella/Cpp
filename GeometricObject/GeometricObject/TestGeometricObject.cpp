#include "GeometricObject.h"
#include "DerivedCircle.h"
#include "DerivedRectangle.h"
#include "DerivedTriangle.h"
#include <iostream>
using namespace std;

int main()
{
	//Geometric Object 객체 생성
	GeometricObject shape; 
	shape.setColor("red"); //변경
	shape.setFilled(true);

	cout << shape.toString() << endl //"Geometric Object"
		<< " color: " << shape.getColor() //접근
		<< " filled: " << (shape.isFilled() ? "true" : "false") << endl;


	//Circle 객체 생성
	Circle circle(5); 
	circle.setColor("black");
	circle.setFilled(false);

	cout << "\n" << circle.toString() << endl //"Circle Object"
		<< " color: " << circle.getColor() //접근
		<< " filled: " << (circle.isFilled() ? "true" : "false")
		<< " radius: " << circle.getRadius()
		<< " area: " << circle.getArea()
		<< " perimeter: " << circle.getPerimeter() << endl;


	
	//Rectangle 객체 생성 (폭, 높이)
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



	//Triangle 객체 생성 (side1, side2, side3)
	Triangle triangle;
	double side1, side2, side3;
	string color;
	bool filled;
	int filledInput;

	cout << "\n" << triangle.toString() << endl
		<<"삼각형의 세 변의 길이, 색상, 삼각형이 채워져있는지(채워짐:1, 안 채워짐:0) " << "\n" << "입력: ";
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