#include "DerivedCircle.h"

//������
Circle::Circle()
{
	radius = 1;
}

//������ ���������� circle ��ü ����
Circle::Circle(double radius)
{
	setRadius(radius);
}

//������ ������,����,ä�� ������ circle ��ü ����
//setColor,setRadius�� �⺻Ŭ������ ���ǵ�-> circleŬ������ ���
Circle::Circle(double radius, const string& color, bool filled)
{
	setRadius(radius);
	setColor(color);
	setFilled(filled);
}

//������ ����
double Circle::getRadius() const
{
	return radius;
}

//���ο� ������ ����
void Circle::setRadius(double radius)
{
	this->radius = (radius >= 0) ? radius : 0;
}

//�Լ�
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
