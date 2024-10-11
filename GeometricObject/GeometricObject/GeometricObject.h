#ifndef GEOMETRICOBJECT_H
#define GEOMETRICOBJECT_H
#include <string>
using namespace std;

//클래스 정의

class GeometricObject
{
public:
	//생성자
	GeometricObject();
	GeometricObject(const string& color, bool filled);

	//private 데이터필드 접근자, 변경자
	string getColor() const;
	void setColor(const string& color);

	bool isFilled() const;
	void setFilled(bool filled);

	//함수
	string toString() const;

private:
	//데이터필드
	string color;
	bool filled;
};

#endif // !GEOMETRICOBJECT_H
