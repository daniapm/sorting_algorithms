#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
* shell_sort - function that sorts an array of integers using the Shell sort
* @array: Pointer to the array that will be sorted.
* @size: Size of the array that will be sorted.
* Return: Doesn't return.
*/

void shell_sort(int *array, size_t size)
{
	int gap = size;
	size_t i;

	if (array == NULL || size < 2)
		return;

	while (gap > 1)
	{
		gap = gap / 3 + 1;
	for (; gap > 0; gap = (gap - 1) / 3)
	{
		for (i = gap; i < size; ++i)
		{
			int key = array[i];
			int end = i - gap;

			/* Encuentra la posición actual donde se debe insertar el elemento*/
			while (end >= 0 && array[end] > key)
			{
				if (array[end + gap] != array[end])
				{
					array[end + gap] = array[end];
					end -= gap;
				}
			}
			/*Inserte el elemento*/
			if (array[end + gap] != key)
			{
				array[end + gap] = key;
			}
		}
		print_array(array, size);
	}
	}
}
