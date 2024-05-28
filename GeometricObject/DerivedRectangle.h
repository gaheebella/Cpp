#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "GeometricObject.h"

//클래스 정의

class Rectangle : public GeometricObject
{
public:
	//생성자
	Rectangle();
	Rectangle(double width, double height);
	Rectangle(double width, double height, const string& color, bool filled);

	//전용 데이터필드 접근, 변경
	double getWidth() const;
	void setWidth(double);

	double getHeight() const;
	void setHeight(double);

	//함수
	double getArea() const;
	double getPerimeter() const;
	string toString() const;


private:
	double width;
	double height;

};

#endif // !RECTANGLE_H
