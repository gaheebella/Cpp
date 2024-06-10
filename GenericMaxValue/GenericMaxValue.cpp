#include <iostream>
#include <string>
using namespace std;

template<typename T> //형식매개변수T-> 상황에따라 int,string,char,double 등 다르게 인식해서 대체됨
T maxValue(T value1, T value2)
{
	if ( value1 > value2)
		return value1;
	else
		return value2;
}

int main()
{
	cout << "Max value between 1 and 3 is " << maxValue(1, 3) << endl;
	cout << "Max value between 1.4 and 4.2 is " << maxValue(1.4, 4.2) << endl;
	cout << "Max value between 'A' and 'D' is " << maxValue('A', 'D') << endl;
	cout << "Max value between \"NBC\" and \"ABC\" is " << maxValue(string("NBC"), string("ABC")) << endl;
	return 0;
}