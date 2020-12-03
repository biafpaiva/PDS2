#include <iostream>

#include "node.hpp"

using namespace std;

class List {
  public:
    int size_list;

    List();

    /** Essa função insere um elemento no começo da lista.
     */
    void insert(int value);
    /** Essa função remove o primeiro nó da lista, e retorna o dado armazenado nele.
       @retorna um inteiro armazenado no primeiro nó da lista.
     */
    int remove();
    /** Esse método indica se a lista está vazia.
       @retorna verdadeiro se a lista está vazia, e falso caso contrário.
     */
    int isEmpty();
    /** Retorna o elemento do meio da lista.
       Se a lista possui 2*n ou 2*n + 1 elementos, então o elemento do meio é
       o que está no índice n, assumindo que o primeiro índice é 0.
       @retorna o elemento do meio da lista.
     */
    int middle() const;
    /** Retorna o último elemento da lista.
       @retorna o inteiro armazenado no último nó da lista.
     */
    int last() const;
    /** Esse método move o primeiro nó da lista para última posição.
       Em outras palavras, rotate() + last() == head.
     */
    void rotate();

  private:
    Node *head; /// Ponteiro para o primeiro elemento da lista.

};l