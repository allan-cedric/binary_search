// === Header file: binary_search.h ===

#ifndef __BINARY_SEARCH_H__
#define __BINARY_SEARCH_H__

// === Bibliotecas ===
#include <stdio.h>
#include <stdlib.h>

// === Algoritmo de busca binária O(log n) ===
// Realiza a busca de um elemento(int val)
// em um vetor ordenado(int *v) de n elementos.
// Retorna o índice do elemento se foi encontrado, senão -1.
int binarySearch(int *arr, int n, int val);

#endif
