#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
* quick_sort - This function implements the quick_sort algorithm.
* @array: Pointer to the array that will be sorted.
* @size: Size of the array that will be sorted.
* Return: Doesn't return.
*/

void quick_sort(int *array, size_t size)
{
	int lw, hi;

	lw = 0;
	hi = size - 1;

	if (array != NULL && size > 2)
	{

	_quick_sort(array, lw, hi, size);
	}
}

/**
* _quick_sort - This function implements the quick_sort algorithm.
* @array: Pointer to the array that will be sorted.
* @size: Size of the array that will be sorted.
* @lw: star line
* @hi: end line
* Return: Doesn't return.
*/

void _quick_sort(int *array, int lw, int hi, size_t size)
{

	if (lw < hi)
	{

		int pi = partition(array, lw, hi, size);


		_quick_sort(array, lw, pi - 1, size);
		_quick_sort(array, pi + 1, hi, size);
	}

}

/**
* partition - This function implements the quick_sort algorithm.
* @array: Pointer to the array that will be sorted.
* @size: Size of the array that will be sorted.
* @lw: star line
* @hi: end line
* Return: Doesn't return.
*/

int partition(int *array, int lw, int hi, size_t size)
{
	int pivot = array[hi];
	int i = (lw - 1), j = 0;


	for (j = lw; j <= hi - 1; j++)
	{

		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
			_swap(&array[i], &array[j]);
			print_array(array, size);
			}
		}
	}
	if (array[hi] < array[i + 1])
	{
	_swap(&array[i + 1], &array[hi]);
	print_array(array, size);
	}
	return (i + 1);
}

/**
* _swap - This function implements the quick_sort algorithm.
* @a: Pointer to the array that will be sorted.
* @b: Size of the array that will be sorted.
* Return: Doesn't return.
*/

void _swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
