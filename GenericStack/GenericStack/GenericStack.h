#ifndef STACK_H
#define STACK_H

//Ŭ���� ����
template <typename T>
class Stack //Ŭ����_ ����
{
public:
	Stack(); //�μ� ���� ������

	//���뵥�����ʵ� ����, ����
	int getSize() const;

	//�Լ�
	bool isEmpty() const; //������ ������� Ȯ��
	T peak() const; //������ ���� �����ֱ�
	void push(T value); //�� �ֱ�
	T pop(); //������ ���� ����

private:
	T elements[100];
	int size;
};

//Ŭ���� ����
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
	return elements[--size]; //�迭�� �� ������ �� �ϳ� �����ϰ� �������� �� ���
}

template<typename T>
int Stack<T>::getSize() const
{
	return size;
}

#endif STACK_H