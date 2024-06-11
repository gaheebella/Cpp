#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream input("C:\\Users\\user\\Downloads\\score.txt"); //데이터 읽기 파일 생성 & 열기

	if (input.fail()) //파일이 존재하는지 여부 확인(open함수 호출후 즉시 fail함수 호출)
	{
		cout << "File does not exist." << endl;
		cout << "Exit program" << endl;
	}

	string firstname;
	string middlename;
	string lastname;

	int score;

	input >> firstname >> middlename >> lastname >> score; //출력스트림-> 객체로부터 데이터를 읽음
	cout << firstname << " " << middlename << " " << lastname << " " << score << endl; //입력스트림

	input >> firstname >> middlename >> lastname >> score;
	cout << firstname << " " << middlename << " " << lastname << " " << score << endl;

	double sum = 0;
	double number;


	while (input >> number) //input스트림이 number를 변수로 숫자들을 끝날때까지 읽어들임
	{
		cout << number << " "; 
		sum += number;
	}


	input.close();

	cout << "Done" << endl;

	return 0;
}