#include <iostream>
#include <string>
using namespace std;

//제네릭 유형 작은것부터 큰것으로 정렬
//템플릿 함수
template<typename T> //작은것부터 큰걸로 정렬 함수_ 반환값 없음, 리스트에 넣어서 정렬
void sort(T list[], int listSize) //listSize는 int형으로 해야함-> T는 배열의 요소 타입을 의미하고 크기와 무관
{
	for (int i = 0; i < listSize; i++) //list[i]
	{
		T currentMin = list[i]; //현재의 최솟값이 list[i] 값
		int currentMinIndex = i; //최솟값의 인덱스
		
		for (int j = i + 1; j < listSize; j++) //list[j] 는 list[i] 의 다음 값
		{
			if (currentMin > list[j])
			{
				currentMin = list[j];
				currentMinIndex = j;
			}
		}

		if (currentMinIndex != i)
		{
			list[currentMinIndex] = list[i];
			list[i] = currentMin;
		}
	}
}


//정렬된 배열 출력
template<typename T>
void printArray(T list[], int listSize)
{
	for (int i = 0; i < listSize; i++)
	{
		cout << list[i] << " ";
	}
	cout << endl;
}


int main()
{
	//int형
	int list1[] = { 3, 4, 5, 1, 2, 8, 10 };
	sort(list1, 7);
	printArray(list1, 7);

	//double형
	double list2[] = { 3.2, 5.5, 9.1, 12.9, 53.4 };
	sort(list2, 5);
	printArray(list2, 5);

	//string형
	string list3[] = { "apple", "orange", "kiwi" };
	sort(list3, 3);
	printArray(list3, 3);
	
	return 0;
}