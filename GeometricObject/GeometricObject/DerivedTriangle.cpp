#include"DerivedTriangle.h"
#include <cmath>

//������
Triangle::Triangle()
{
	side1 = 1.0;
	side2 = 1.0;
	side3 = 1.0;
}

Triangle::Triangle(double side1, double side2, double side3)
{
	setSide1(side1);
	setSide2(side2);
	setSide3(side3);
}

Triangle::Triangle(double side1, double side2, double side3, const string& color, bool filled)
{
	setSide1(side1);
	setSide2(side2);
	setSide3(side3);
	setColor(color);
	setFilled(filled);
}

//���� �������ʵ� ����, ����
double Triangle::getSide1() const
{
	return side1;
}

void Triangle::setSide1(double side1)
{
	this->side1 = (side1 >= 0) ? side1 : 0;
}

double Triangle::getSide2() const
{
	return side2;
}

void Triangle::setSide2(double side2)
{
	this->side2 = (side2 >= 0) ? side2 : 0;
}

double Triangle::getSide3() const
{
	return side3;
}

void Triangle::setSide3(double side3)
{
	this->side3 = (side3 >= 0) ? side3 : 0;
}

//�Լ�
double Triangle::getArea() const //�� ���� ���̸� �� �� �ﰢ�� ����= ����� ����
{
	double s = (side1 + side2 + side3) / 2.0; //�ݵѷ�
	double area = sqrt(s * (s - side1) * (s - side2) * (s - side3)); //����� ����
	return area;
}

double Triangle::getPerimeter() const
{
	return side1 + side2 + side3;
}

string Triangle::toString() const
{
	return "Triangle Object";
}