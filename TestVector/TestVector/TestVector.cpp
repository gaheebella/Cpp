#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<int> intVector; //int값을 가지는 vector

	for (int i = 0; i < 10; i++) //요소 넣기
		intVector.push_back(i + 1);

	cout << "Show numbers in the Vector: "; //벡터 출력
	for (int i = 0; i < intVector.size(); i++)
		cout << intVector[i] << " ";
	cout << endl;


	vector<string> stringVector; //string값을 가지는 vector

	stringVector.push_back("green"); //요소 넣기
	stringVector.push_back("pink");
	stringVector.push_back("white");
	stringVector.push_back("black");

	cout << "Show strings in the Vector: "; //벡터 출력
	for (int i = 0; i < stringVector.size(); i++)
		cout << stringVector[i] << " ";

	cout << endl;

	stringVector.pop_back(); //마지막 요소 삭제

	vector<string> V2;
	V2.swap(stringVector); //stringVector의 내용을 v2와 교환
	V2[0] = "red"; 

	cout << "Strings in the vector2: ";
	for (int i = 0; i < V2.size(); i++)
		cout << V2.at(i) << " "; //요소 검색 at함수

	cout << endl;
	cout << V2.at(1);

	return 0;
}