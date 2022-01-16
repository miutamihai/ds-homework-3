#include <iostream>
using namespace std;

class Stack {
public:
	int MaxElem;
	int top;
	int data[50];
public:
	Stack();
	int IsFull();
	int IsEmpty();
	void push(int val);
	int pop();
	void printStack();
	void primeDivisors(int val);
	bool isPrime(int val);
};
inline Stack::Stack()
{
	top = 0;
	MaxElem = 50;
}
inline int Stack::IsFull()
{
	if (top == MaxElem)
		return 1;
	else
		return 0;
}
inline int Stack::IsEmpty()
{
	if (top == 0)
		return 1;
	else
		return 0;
}
inline void Stack::push(int val)
{
	if (!IsFull())
	{
		top++;
		data[top] = val;
	}
	else
		cout << "Error! Stiva plina";
}
inline int Stack::pop()
{
	if (!IsEmpty())
	{
		top--;
		return data[top + 1];
	}
	else cout << "Error! Stiva goala";
	return 0;
}
void Stack::printStack()
{
	if (top > 0)
	{
		for (int i = 1; i <= top; i++)
			cout << data[i] << endl;
	}
	else
		cout << "\nStiva ete goala";
}

bool Stack::isPrime(int n)
{
	bool prime = true;
	for (int i = 3; i <= sqrt(n); i + 2)
	{
		if (n % i == 0)
		{
			prime = false;
		}
	}
	return prime;
}

void Stack::primeDivisors(int n) {
	Stack st1;
	while (!st1.IsEmpty())
	{
		n = st1.pop();
		if (n % 2 == 0)
		{
			cout << "2";
		}
		for (int i = 3; i <= n / 2; i + 2)
		{
			if (isPrime(i))
			{
				cout << i << " ";
			}
		}
	}
}
