#include <iostream>
#include "static-list.h"

StaticList::StaticList() {
  count = 0;
}

int StaticList::length() {
  return count;
}

int StaticList::getElement(int index) {
  return data[index - 1];
}

void StaticList::print() {
  for (size_t i = 0; i < count; i++) {
    std::cout << data[i] << ' ';
  }

  std::cout << '\n';
}

void StaticList::modify(int index, int value) {
  data[index - 1] = value;
}

void StaticList::insert(int index, int value) {
  for(size_t i = index - 1; i < count - 1; i ++) {
      data[i] = data[i + 1];
  }

  count ++;
  data[index] = value;
}

void StaticList::deleteElement(int index) {
  for(size_t i = index - 1; i < count; i ++) {
    data[i - 1] = data[i];
  }
}

void StaticList::sort() {
  for(size_t i = 0; i < count; i ++) {
    for(size_t j = i; j < count; j ++) {
      if(data[i] > data[j]) {
        auto temp = data[i];
        data[i] = data[j];
        data[j] = temp;
      }
    }
  }
}

void StaticList::merge(StaticList first, StaticList second) {
  first.sort();
  second.sort();
  size_t i, j, k;
  i = j = k = 0;

  if(first.count + second.count > sizeof(data) / 4) {
    std::cout << "No can do chief";

    return;
  }

  while(i < first.count && j < second.count) {
    if(first.data[i] < second.data[j]) {
      data[k] = first.data[i];
      i ++;
    }
    else {
      data[k] = second.data[j];
      j ++;
    }
    
    k++;
  }

  for(size_t index = i; index < first.count; index ++) {
    data[k] = first.data[index];
    k ++;
  }

  for(size_t index = j; index < second.count; index ++) {
    data[k] = second.data[index];
    k ++;
  }

  count = k;
}
