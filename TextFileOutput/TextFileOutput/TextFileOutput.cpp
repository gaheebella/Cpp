#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//ofstream = 파일에 데이터를 쓰기
	ofstream output; // output 객체 생성

	output.open("C:\\Users\\user\\Downloads\\score.txt"); //파일 열기

	//파일객체에 데이터 쓰기
	output << "John" << " " << "T" << " " << "Smith" << " " << 90 << endl;
	output << "Eric" << " " << "K" << " " << "Jones" << " " << 85 << endl;

	output.close(); //파일 닫기

	cout << "Done" << endl;

	return 0;
}