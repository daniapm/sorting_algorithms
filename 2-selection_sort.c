#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
* selection_sort - This function implements the selection sort algorithm.
* @array: Pointer to the array that will be sorted.
* @size: Size of the array.
* Return: Doesn't return.
*/

void selection_sort(int *array, size_t size)
{
	/*avanzar la posición a través de toda la matriz */
	size_t i, j, position, swap;

	if (array != NULL || size > 2)
	{
		/*encuentra el elemento min en el sin clasificar a [i .. aLength-1] */
		for (i = 0; i < size - 1; i++)
		{
			/*asume que el min es el primer elemento */
			position = i;
			/* prueba contra elementos después de i para encontrar el más pequeño */
			for (j = i + 1; j < size; j++)
			{
				/* si este elemento es menor, entonces es el nuevo mínimo */
				if (array[position] > array[j])
				/* encontró un nuevo mínimo; recuerda su índice */
				position = j;
			}
			if (position != i)
			{
				swap = array[i];
				array[i] = array[position];
				array[position] = swap;
				print_array(array, size);
			}
		}
	}
	return;

}
