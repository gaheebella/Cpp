#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "GeometricObject.h"

// 클래스 정의

class Triangle : public GeometricObject
{
public:
	// 생성자
	Triangle();
	Triangle(double side1, double side2, double side3);
	Triangle(double side1, double side2, double side3, const string& color, bool filled);

	//전용데이터필드 접근, 변경
	double getSide1() const;
	void setSide1(double);

	double getSide2() const;
	void setSide2(double);

	double getSide3() const;
	void setSide3(double);

	//함수
	double getArea() const;
	double getPerimeter() const;
	string toString() const;

private:
	double side1;
	double side2;
	double side3;

};


#endif // !
