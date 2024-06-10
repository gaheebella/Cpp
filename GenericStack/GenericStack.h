#ifndef STACK_H
#define STACK_H

//클래스 정의
template <typename T>
class Stack //클래스_ 스택
{
public:
	Stack(); //인수 없는 생성자

	//전용데이터필드 접근, 변경
	int getSize() const;

	//함수
	bool isEmpty() const; //스택이 비었는지 확인
	T peak() const; //마지막 원소 보여주기
	void push(T value); //값 넣기
	T pop(); //마지막 원소 제거

private:
	T elements[100];
	int size;
};

//클래스 구현
template<typename T>
Stack<T>::Stack()
{
	size = 0;
}

template<typename T>
bool Stack<T>::isEmpty() const
{
	return size == 0;
}

template<typename T>
T Stack<T>::peak() const
{
	return elements[size - 1];
}

template<typename T>
void Stack<T>::push(T value)
{
	elements[size++] = value;
}

template<typename T>
T Stack<T>::pop()
{
	return elements[--size]; //배열의 맨 마지막 값 하나 삭제하고 삭제당한 값 출력
}

template<typename T>
int Stack<T>::getSize() const
{
	return size;
}

#endif STACK_H