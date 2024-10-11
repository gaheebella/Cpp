#ifndef CIRCLE_H
#define CIRCLE_H
#include "GeometricObject.h"


//클래스 정의
//기본클래스:GeometricObject, 파생클래스: Circle

class Circle : public GeometricObject
{
public:
	//생성자
	Circle();
	Circle(double);
	Circle(double radius, const string& color, bool filled);

	//전용데이터필드 접근,변경
	double getRadius() const;
	void setRadius(double);

	//함수
	double getArea() const;
	double getPerimeter() const;
	double getDiameter() const;

	string toString() const;


private:
	double radius;

};

#endif