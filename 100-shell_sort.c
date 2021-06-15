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
	unsigned int i = 0, j = 0, gap = 0;
	int key = 0, end = 0;

	if (array != NULL || size < 2)
	{

	while (gap < size / 3)
		gap = gap * 3 + 1;

	for (; gap > 0; gap = (gap - 1) / 3)
	{
		for (i = gap; i < size; i++)
		{
			key = array[i];
			j = i;
			for (; j >= gap && array[j - gap] > key;
					j -= gap)
			{
				end = j - gap;
				array[j] = array[end];
			}
				array[j] = key;
		}
		print_array(array, size);
	}
	}
}
