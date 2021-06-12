#include <stdlib.h>
#include <stdio.h>
#include "sort.h"



void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    int orden = 0;

/* Repita mientras haya intercambio*/
    while(orden == 0)
    {
    for (i = 0; i < size-1; i++)
    {
        orden = 1;
        for (j = 0; j < size-i-1; j++)
        {
            if (array[j] > array[j+1]) /*si el elemento es mayor que el siguiente intercambielo*/
            {
                swap(&array[j], &array[j+1]);
                print_array(array, size);
                orden = 0; /*ya intercambio reinicie*/
            }
    }
    }
    }
}
