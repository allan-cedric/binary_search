/*
    Source file: binary_search.c
*/

/*
    Implementação da função que expressa
    o algoritmo de busca binária
*/

/*
    Autor: Allan Cedric
*/

#include "binary_search.h"

int binarySearch(int *v, int tam, int value)
{
    int ini = 0, fim = tam - 1, meio;
    while (ini <= fim)
    {
        meio = ini + (fim - ini) / 2;
        if (v[meio] == value)
            return meio;
        if (v[meio] < value)
            ini = meio + 1;
        else
            fim = meio - 1;
    }
    return -1;
}