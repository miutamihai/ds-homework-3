#include "farey.h"

using Iterator = std::vector<Pair>::iterator;

int main() {
    std::vector<Pair> sequence = generateSequence(4);

    for(Iterator iterator = sequence.begin(); iterator != sequence.end(); ++ iterator) {
        displayPair(*iterator);
    }
}
