// === Source file: binary_search.c ===

#include "binary_search.h"

int binarySearch(int *arr, int n, int val)
{
    int begin = 0, end = n - 1, mid;
    while (begin <= end)
    {
        mid = (begin + end) / 2;
        if (arr[mid] == val)
            return mid;
        if (arr[mid] < val)
            begin = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}