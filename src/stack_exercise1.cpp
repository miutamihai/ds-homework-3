#include <iostream>
#include <stdlib.h>

using namespace std;

const int LIMIT = 100;

bool isEmpty(int k) {
    return k == 0;
}

void push(int stack[], int& k, int number)
{
    k = k + 1;
    stack[k] = number;
}

int peek(int stack[], int k)
{
    return stack[k];
}

int pop(int stack[], int& k)
{
    int result = peek(stack, k);
    k = k - 1;
    return result;
}

int size(int k)
{
    return k;
}

int element(int stack[] , int k)
{
    int x = 0;
    if (isEmpty(k))
        x = INT_MAX;
    else
        x = stack[1];
    return x;
}

int element2(int stack[], int k)
{
    int x = 0;
    if (isEmpty(k) && sizeof(stack) / 4 >= 3)
        x = INT_MAX;
    else
        x = stack[3];
    return x;
}

int element3(int stack[], int k)
{
    int x = 0;
    if (isEmpty(k))
        x = INT_MAX;
    else
        x = peek(stack,k);
    return x;
}

int deleteEqualElements(int stack[], int k)
{
    int x = 0;
    cin >> x;
    while (sizeof(stack) / 4 >= 3)
    {
        stack[k] = stack[k - 1];
        return stack[k];
    }
}

void displayStack(int stack[], int k)
{
    if (stack[1] > 0)
    {
        for (int i = 1; i <= sizeof(stack) + 1; i++)
        {
            cout << stack[i] << " ";
        }
    }
    else
        cout << "Empty stack";
}
