#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include "heap.h"

typedef struct nodo{
   void* data;
   int priority;
}heapElem;

typedef struct Heap{
  heapElem* heapArray;
  int size;
  int capac;
} Heap;


void* heap_top(Heap* pq){
  if (pq->size == 0 || pq == NULL){
    return NULL;
  }
  return pq->heapArray[0].data;
}

void heap_push(Heap* pq, void* data, int priority){

}


void heap_pop(Heap* pq){
  if (pq->size == 0 || pq == NULL){
    return;
  }
  pq->heapArray[0] = pq->heapArray[pq->size - 1];
  pq->size--;

  int actual = 0;
  int izq = 1;
  int der = 2;
  int max = izq;

  while (izq < pq->size){
    if (der < pq->size && pq->heapArray[der].priority > pq->heapArray[izq].priority){
      max = der;
    }
    if (pq->heapArray[actual].priority > pq->heapArray[max].priority){
      heapElem temp = pq->heapArray[actual];
      pq->heapArray[] = pq->heapArray[max_child];
            pq->heapArray[max_child] = temp;
            current = max_child;
            left_child = 2 * current + 1;
            right_child = 2 * current + 2;
            max_child = left_child;
    }
  }
  
}

Heap* createHeap(){
  Heap* mont = (Heap*) malloc(sizeof(Heap));
  mont->size = 0;
  mont->capac = 3;
  mont->heapArray = calloc(mont->capac , sizeof(heapElem));
  
  return mont;
}
