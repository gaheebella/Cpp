#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "GeometricObject.h"

//Ŭ���� ����

class Rectangle : public GeometricObject
{
public:
	//������
	Rectangle();
	Rectangle(double width, double height);
	Rectangle(double width, double height, const string& color, bool filled);

	//���� �������ʵ� ����, ����
	double getWidth() const;
	void setWidth(double);

	double getHeight() const;
	void setHeight(double);

	//�Լ�
	double getArea() const;
	double getPerimeter() const;
	string toString() const;


private:
	double width;
	double height;

};

#endif // !RECTANGLE_H
