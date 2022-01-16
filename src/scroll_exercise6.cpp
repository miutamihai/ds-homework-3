#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

class Scroll {
	int spate;
	int v[1000];

	Scroll() {
        int value;
        position = 0;
        cin >> value;
        while ((value != 0) || (Full(s) == 1)) {
            Insert(value);
            cin >> value;
        }
	}

    void ScrollInit() {
        int value;
        position = 0;
        cin >> value;
        while ((value != 0) || (Full(s) == 1)) {
            Insert(value);
            cin >> value;
        }
    }
    int Empty() {
        int empty;
        empty = 0;
        if (position == 0) empty = 1;
        return empty;
    }
    int Full() {
        int full;
        full = 0;
        if (position == 99) full = 1;
        return full;
    }
    void Insert(int value) {
        if (Full(s) != 1) {
            v[position] = value;
            position += 1;
        }
    }
    int DeleteS() {
        int x;
        x = 0;
        if (Empty() != 1)	x = v[position -= 1];
        return x;
    }
    int DeleteF() {
        int x;
        x = 0;
        if (Empty() != 1) {
            x = v[0];
            for (int i = 0; i < position; i++) v[i] = v[i + 1];
            position -= 1;
        }
        return x;
    }
    void ScrollPrint() {
        while (Empty() != 1)
            if ((int)((position % 2 == 0)))
                cout << DeleteS();
            else
                cout << DeleteF(s);
    }
}

