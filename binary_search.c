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
    int ini = -1, fim = tam, meio;
    while (ini + 1 < fim)
    {
        meio = (ini + fim) / 2;
        if (v[meio] == value)
            return meio;
        if (v[meio] < value)
            ini = meio;
        else
            fim = meio;
    }
    return -1;
}