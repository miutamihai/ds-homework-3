#include <iostream>
#include <vector>

using namespace std;

struct Pair {
    int x = 0, y = 1;
};

void displayPair(Pair pair);

vector<Pair> generateSequence(int n);
