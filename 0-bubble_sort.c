#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
* bubble_sort - This function implements the bubble_sort algorithm.
* @array: Pointer to the array that will be sorted.
* @size: Size of the array that will be sorted.
* Return: Doesn't return.
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int orden = 0;

	if (size < 2)
	{
		return;
	}

	if (array == NULL)
	{
		return;
	}

/* Repita mientras haya intercambio*/
	while (orden == 0)
	{
		for (i = 0; i < size - 1; i++)
		{
			orden = 1;
			for (j = 0; j < size - i - 1; j++)
			{
				if (array[j] > array[j + 1])/*si el elemento > el siguiente intercambielo*/
				{
					swap(&array[j], &array[j + 1]);
					print_array(array, size);
					orden = 0; /*ya intercambio reinicie*/
				}
			}
		}
	}
}

/**
* swap - Takes in two pointers to two integers and swaps their positions.
* @xp: Pointer to x position.
* @yp: Pointer to y position.
* Return: Doesn't return.
*/
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
