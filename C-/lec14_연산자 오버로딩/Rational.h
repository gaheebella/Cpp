#ifndef RATIONAL_H
#define RATIONAL_H
#include <string>
using namespace std;

class Rational
{
public:
	//생성자
	Rational();
	Rational(int numerator, int denominator);

	//private 데이터필드 접근
	int getNumerator() const;
	int getDenominator() const;

	//클래스의 멤버함수 선언
	Rational add(const Rational& secondRational) const;
	Rational subtract(const Rational& secondRational) const;
	Rational multiply(const Rational& secondRational) const;
	Rational divide(const Rational& secondRational) const;

	//함수
	int compareTo(const Rational& secondRational) const;
	bool equals(const Rational& secondRational) const;
	int intValue() const; //정수값
	double doubleValue() const; //실수값
	string toString() const; //객체의 상태를 문자열로 변환

private:
	int numerator; //분자
	int denominator; //분모
	static int gcd(int n, int d); //최대공약수_매개변수(분자,분모)
};

#endif 
