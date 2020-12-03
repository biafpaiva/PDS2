#include "list.hpp"
#include <iostream>

using namespace std;

List::List() {
  head = new Node(0, nullptr);
  size_list = 0;
}

void List::insert(int value) {
    Node* aux = new Node(value, head);
    if(size_list == 0) {
      head = aux;
      aux->setNext(nullptr);
      size_list++;
    }
    else {
      aux->setNext(head);
      head = aux;
      size_list++;
    }
}

int List::remove() {
if (size_list != 0) {
  Node *aux = head;
  int value = aux->getData();
  head = head->getNext();
  delete aux;
  size_list--;
  return value;
}
  else 
    return -1;
}

int List::isEmpty() {
  if (size_list == 0)
    return 1;
  else
    return 0;
}

int List::middle() const {
  int i = 0;
  Node *aux = head;
  for (i = 0; i < size_list/2; i++) { 
    aux = aux->getNext();
  }
  return aux->getData();
}

int List::last() const {
  int i = 0;
  Node *aux = head;
  for (i = 0; i < size_list-1; i++) {
    aux = aux->getNext();
  }
  return aux->getData();
}

void List::rotate() {
  int i = 0;
  Node *aux = head;
  Node *aux2 = head->getNext();
  for (i = 0; i < size_list-1; i++) {
    aux = aux->getNext();
  }
  aux->setNext(head);
  head = aux2;
}
