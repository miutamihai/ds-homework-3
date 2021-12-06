#pragma once

class StaticList {
  int count;
  int data[30];

public:
  StaticList();
  ~StaticList();

  int length();
  int getElement(int index);
  void print();
  void modify(int index, int value);
  void insert(int index, int value);
  void deleteElement(int index);
  void sort();
  void merge(StaticList first, StaticList second);
};
