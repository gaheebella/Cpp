#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string filename;
	cout << "Enter a file name: "; //파일 이름 입력하고
	cin >> filename;

	//open함수로 전달되는 파일이름은 c문자열이어야 함. string객체로부터 c문자열반환->string클래스의 c_str()함수 호출
	ifstream input(filename.c_str());

	if (input.fail()) //파일이 존재하는지 여부 확인(open함수 호출후 즉시 fail함수 호출)
	{
		cout << "File does not exist." << endl;
		cout << "Exit program" << endl;
		return 0;
	}

	double sum = 0;
	double number;

	while (input >> number) //input스트림이 number를 변수로 숫자들을 끝날때까지 읽어들임
	{
		cout << number << " ";
		sum += number;
	}

	string firstname;
	string middlename;
	string lastname;

	int score;

	input >> firstname >> middlename >> lastname >> score; //출력스트림-> 객체로부터 데이터를 읽음
	cout << firstname << " " << middlename << " " << lastname << " " << score << endl; //입력스트림

	input >> firstname >> middlename >> lastname >> score;
	cout << firstname << " " << middlename << " " << lastname << " " << score << endl;


	input.close();

	cout << "Done" << endl;

	return 0;
}