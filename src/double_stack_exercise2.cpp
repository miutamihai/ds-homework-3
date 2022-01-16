#include <iostream>

using namespace std;

class Doublestack {
	int MaxElem;
	int topA;
	int topB;
	int data[50];
public:
	Doublestack();
	int IsFullA();
	int IsEmptyA();
	void pushA(int val);
	int popA();
	void printStackA();
	int IsFullB();
	int IsEmptyB();
	void pushB(int val);
	int popB();
	void printStackB();
};
inline Doublestack::Doublestack()
{
	topA = 0;
	topB = 0;
	MaxElem = 50;
}
inline int Doublestack::IsFullA()
{
	if (topA == MaxElem)
		return 1;
	else
		return 0;
}
inline int Doublestack::IsEmptyA()
{
	if (topA == 0)
		return 1;
	else
		return 0;
}
inline void Doublestack::pushA(int val)
{
	if (!IsFullA())
	{
		topA++;
		data[topA] = val;
	}
	else
		cout << "Stack is full";
}
inline int Doublestack::popA()
{
	if (!IsEmptyA())
	{
		topA--;
		return data[topA + 1];
	}
	else cout << "Stack is empty";
	return 0;
}
void Doublestack::printStackA()
{
	if (topA > 0)
	{
		for (int i = 1; i <= topA; i++)
			cout << data[i] << endl;
	}
	else
		cout<<"Stack is empty";
}



inline int Doublestack::IsFullB()
{
	if (topB == MaxElem)
		return 1;
	else
		return 0;
}
inline int Doublestack::IsEmptyB()
{
	if (topB == 0)
		return 1;
	else
		return 0;
}
inline void Doublestack::pushB(int val)
{
	if (!IsFullB())
	{
		topB++;
		data[topB] = val;
	}
	else
		cout << "Stack is full";
}
inline int Doublestack::popB()
{
	if (!IsEmptyB())
	{
		topB--;
		return data[topB + 1];
	}
	else cout << "Stack is empty";
	return 0;
}
void Doublestack::printStackB()
{
	if (topB > 0)
	{
		for (int i = 1; i <= topB; i++)
			cout << data[i] << endl;
	}
	else
		cout << "Stack is empty";
}
