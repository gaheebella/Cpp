#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream input("C:\\Users\\user\\Downloads\\state.txt");

	if (input.fail())
	{
		cout << "File does not exist" << endl;
		return 0;
	}

	string state;

	while (!input.eof())
	{
		getline(input, state, '#'); //getline함수 -> 공백이 포함된 문자열 읽기
		cout << state << endl;
	}    

	input.close();

	cout << "Done" << endl;

	return 0;
}