#ifndef CIRCLE_H
#define CIRCLE_H
#include "GeometricObject.h"


//Ŭ���� ����
//�⺻Ŭ����:GeometricObject, �Ļ�Ŭ����: Circle

class Circle : public GeometricObject
{
public:
	//������
	Circle();
	Circle(double);
	Circle(double radius, const string& color, bool filled);

	//���뵥�����ʵ� ����,����
	double getRadius() const;
	void setRadius(double);

	//�Լ�
	double getArea() const;
	double getPerimeter() const;
	double getDiameter() const;

	string toString() const;


private:
	double radius;

};

#endif