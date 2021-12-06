#include "static-list.h"
#include <iostream>

int main() {
  auto object = new StaticList();
  int value, index;
  std::cin >> value;

  while(value != 0) {
    object->insert(object->length(), value);

    std::cin >> value;
  }

  object->print();

  object->sort();

  object->print();

  return 0;
}
