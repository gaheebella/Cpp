#ifndef GEOMETRICOBJECT_H
#define GEOMETRICOBJECT_H
#include <string>
using namespace std;

//Ŭ���� ����

class GeometricObject
{
public:
	//������
	GeometricObject();
	GeometricObject(const string& color, bool filled);

	//private �������ʵ� ������, ������
	string getColor() const;
	void setColor(const string& color);

	bool isFilled() const;
	void setFilled(bool filled);

	//�Լ�
	string toString() const;

private:
	//�������ʵ�
	string color;
	bool filled;
};

#endif // !GEOMETRICOBJECT_H
