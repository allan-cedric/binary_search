/*
    Header file: binary_search.h
*/

/*
    Protótipo da função de busca binária
    para operar em um vetor de inteiros
*/

/*
    Autor: Allan Cedric
*/

#ifndef __BINARY_SEARCH_H__
#define __BINARY_SEARCH_H__

/*
    Bibliotecas padrões
*/
#include <stdio.h>
#include <stdlib.h>

/*
    Busca o elemento(value) no vetor(v),
    se encontrar retorna o índice que se encontra o elemento,
    senão -1
*/
int binarySearch(int *v, int tam, int value);

#endif
