#include <iostream>
#include <string.h>

using namespace std;

const int LIMIT = 100;

bool isEmpty(int k)
{
    if (k == 0)
        return true;
    return false;
}

void push(int queue[], int& k, int number)
{
    k = k + 1;
    queue[k] = number;
}

int front(int queue[])
{
    return queue[1];
}

int pop(int queue[], int& k)
{
    int result = queue[1];
    for (int i = 1; i < k - 1; i++)
        queue[i] = queue[i + 1];
    k = k - 1;
    return result;
}

int size(int k)
{
    return k;
}

int nextPoz(int index)
{
    if (index < LIMIT - 1)
        return index + 1;
    else return 0;
}

void readAndPrint(char queue[])
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> queue[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cout << queue[i];
    }
}

void verify(char queue[])
{
    char* found;
    char* left = 0, right = 0;
    found = strchr(queue, '<');
    if (found != NULL)
    {
        cout << "1" << " ";
    }
    else
    {
        count << "No lesser sign found";
        exit(0);
    }
    cout << endl;
    for (int i = 1; i <= strlen(queue); i++)
    {
        cout << found[i];
    }
    cout << endl;
    right = (char)found;
        for (int i = (char)right; i < strlen(queue); i++)
        {
            left = found + 1;
        }
        if (strlen(left) > strlen(&right))
        {
            cout << "2"<<" ";
        }
        else
            if (strlen(left) < strlen(&right))
            {
                cout << "3"<<" ";
            }
            else
                if ((strlen(left) == strlen(&right)) && strcmp(left, &right))
                {
                    cout<<"4"<<" ";
                }
                else
                    if ((strlen(left) == strlen(&right) && !strcmp(left, &right)))
                    {
                        cout << "0"<<" ";
                    }
}
