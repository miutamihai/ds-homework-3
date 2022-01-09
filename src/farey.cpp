#include "farey.h"

void displayPair(Pair pair)
{
    cout << pair.x << " / " << pair.y << '\n';
}

vector<Pair> generateSequence(int n)
{
    vector<Pair> result;
    result.push_back(Pair());

    uint a = 0, b = 1, c = 1, d = n;
    while (c <= n)
    {
        const uint k = (n + b) / d;
        const uint next_c = k * c - a;
        const uint next_d = k * d - b;
        a = c;
        b = d;
        c = next_c;
        d = next_d;

        Pair newElement;
        newElement.x = a;
        newElement.y = b;

        result.push_back(newElement);
    }

    return result;
}