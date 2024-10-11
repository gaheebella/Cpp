#include "DerivedCircle.h"

//생성자
Circle::Circle()
{
	radius = 1;
}

//지정된 반지름으로 circle 객체 생성
Circle::Circle(double radius)
{
	setRadius(radius);
}

//지정된 반지름,색상,채색 값으로 circle 객체 생성
//setColor,setRadius는 기본클래스에 정의됨-> circle클래스에 상속
Circle::Circle(double radius, const string& color, bool filled)
{
	setRadius(radius);
	setColor(color);
	setFilled(filled);
}

//반지름 접근
double Circle::getRadius() const
{
	return radius;
}

//새로운 반지름 설정
void Circle::setRadius(double radius)
{
	this->radius = (radius >= 0) ? radius : 0;
}

//함수
double Circle::getArea() const
{
	return radius * radius * 3.14159;
}

double Circle::getDiameter() const
{
	return 2 * radius;
}

double Circle::getPerimeter() const
{
	return 2 * radius * 3.14159;
}

string Circle::toString() const
{
	return "Circle object";
}
