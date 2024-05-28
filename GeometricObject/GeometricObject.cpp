#include "GeometricObject.h"

//클래스 구현

GeometricObject::GeometricObject() //인수 없는 생성자-> 데이터필드 초기화
{
	color = "white";
	filled = false;
}

GeometricObject::GeometricObject(const string& color, bool filled) //인수 있는 생성자
{
	this->color = color;
	this->filled = filled;
}

//전용 데이터필드 접근, 변경
string GeometricObject::getColor() const
{
	return color;
}

void GeometricObject::setColor(const string& color)
{
	this->color = color;
}

bool GeometricObject::isFilled() const
{
	return filled;
}

void GeometricObject::setFilled(bool filled)
{
	this->filled = filled;
}

//함수
string GeometricObject::toString() const
{
	return "Geometric Object";
}