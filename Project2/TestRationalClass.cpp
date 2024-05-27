#include <iostream>
#include "Rational.h"
using namespace std;

int main()
{
	//객체 생성 -> 인수 있는 생성자 호출_ (분자,분모)
	Rational r1(4, 2); 
	Rational r2(2, 3);

	//멤버함수 호출
	cout << r1.toString() << " + " << r2.toString() << " = " << r1.add(r2).toString() << endl;
	cout << r1.toString() << " - " << r2.toString() << " = " << r1.subtract(r2).toString() << endl;
	cout << r1.toString() << " * " << r2.toString() << " = " << r1.multiply(r2).toString() << endl;
	cout << r1.toString() << " / " << r2.toString() << " = " << r1.divide(r2).toString() << endl;

	//intValue 와 doubleValue 함수 호출_ 차이 비교
	cout << "r2.intValue() is " << r2.intValue() << endl;
	cout << "r2.doubleValue() is " << r2.doubleValue() << endl;

	//compareTo 와 equals 함수 호출_ r1이 r2보다 크면 양수, 같으면 0, 작으면 음수
	cout << "r1.compareTo(r2) is " << r1.compareTo(r2) << endl;
	cout << "r2.compareTo(r1) is " << r2.compareTo(r1) << endl;
	cout << "r1.compareTo(r1) is " << r1.compareTo(r1) << endl;

	cout << "r1.equals(r1) is " << (r1.equals(r1) ? "true" : "false") << endl;
	cout << "r1.equals(r2) is " << (r1.equals(r2) ? "true" : "false") << endl;


	return 0;
}