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

  /*int actual = 0;
  int izq = 1;
  int der = 2;
  int max = izq;

  while (izq < pq->size){
    if (der < pq->size && pq->heapArray[der].priority > pq->heapArray[izq].priority){
      max = der;
    }
    if (pq->heapArray[actual].priority > pq->heapArray[max].priority){
      heapElem *harregloMont = pq->heapArray[actual];
      pq->heapArray[actual] = pq->heapArray[max];
      pq->heapArray[max] = arregloMont;
      actual = max;
      izq = 2 * actual + 1;
      der = 2 * actual + 2;
      max = izq;
    }
  }
  if (pq->size <= pq->capac / 2 && pq->capac > 3) {
    pq->capac /= 2;
    pq->heapArray = realloc(pq->heapArray, pq->capac *sizeof(heapElem));
  }*/
}

Heap* createHeap(){
  Heap* mont = (Heap*) malloc(sizeof(Heap));
  mont->size = 0;
  mont->capac = 3;
  mont->heapArray = calloc(mont->capac , sizeof(heapElem));
  
  return mont;
}
