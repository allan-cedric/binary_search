#include "binary_search/binary_search.h"
#include <time.h>

int cmp_sort(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    srand(time(NULL));

    int n;
    printf("Array's size: ");
    scanf("%i", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (!arr)
    {
        fprintf(stderr, "Memory allocation error!\n");
        exit(1);
    }

    for (int i = 0; i < n; i++)
        arr[i] = (rand() % (n + 20));

    qsort(arr, n, sizeof(int), cmp_sort);

    printf("[");
    for (int i = 0; i < n - 1; i++)
        printf("%i, ", arr[i]);
    printf("%i]\n", arr[n - 1]);

    int val;
    printf("Write a value to search: ");
    scanf("%i", &val);

    int index = binarySearch(arr, n, val);
    if (index < 0)
        printf("Value not found => index(%i).\n", index);
    else
        printf("Value found => index(%i).\n", index);
    
    free(arr);

    return 0;
}