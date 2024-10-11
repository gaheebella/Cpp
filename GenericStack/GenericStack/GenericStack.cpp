#include <iostream>
#include <string>
#include "GenericStack.h"
using namespace std;


int main()
{
	//int형 스택 생성
	Stack<int> intStack; //객체 생성

	for (int i = 0; i < 10; i++)
	{
		intStack.push(i); //객체에 접근, i값 넣기
	}

	while (!intStack.isEmpty()) //스택이 비어있지 않을 때
	{
		cout << intStack.pop() << " "; // 마지막 원소 제거
	}
	cout << endl;

	//문자열 스택 생성
	Stack<string> stringStack;

	stringStack.push("green");
	stringStack.push("yellow");
	stringStack.push("white");

	while (!stringStack.isEmpty())
	{
		cout << stringStack.pop() << " ";
	}
	cout << endl;
	

	return 0;
}