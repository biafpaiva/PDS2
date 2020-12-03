#include <iostream>
#include "list.hpp"

using namespace std;

int main(int argc, char** argv) {
  int input;
  std::cin >> input;
  List *list = new List();
  while (input != 0) {
    list->insert(input);
    std::cin >> input;
  }
  std::cout << "s:" << list->size_list << ", ";
  std::cout << "m:" << list->middle() << ", ";
  std::cout << "l:" << list->last() << ", ";
  std::cout << "r:" << list->remove() << ", ";
  std::cout << "m:" << list->middle() << ", ";
  std::cout << "l:" << list->last() << ", ";
  list->rotate();
  std::cout << "m:" << list->middle() << ", ";
  std::cout << "l:" << list->last() << std::endl; 
  return 0; 
}