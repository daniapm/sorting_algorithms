#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
* counting_sort - function that sorts an array using the Counting sort
* @array: Pointer to the array that will be sorted.
* @size: Size of the array that will be sorted.
* Return: Doesn't return.
*/

void counting_sort(int *array, size_t size)
{
int *arr1 = malloc(sizeof(size));
int i;
size_t k;
int *count_arr;

int x = array[0];
for (k = 1; k < size; k++)
{
if (array[k] > x)
	x = array[k];
}

count_arr =  malloc(sizeof(size));

for (i = 0; i <= x; ++i)
{
count_arr[i] = 0;
}

for (k = 0; k < size; k++)
{
count_arr[array[k]]++;
}

for (i = 1; i <= x; i++)
{
	count_arr[i] += count_arr[i - 1];
	printf("%d, ", count_arr[i - 1]);
}
count_arr[i] += count_arr[i - 1];
printf("%d\n", count_arr[i - 1]);
for (i = size - 1; i >= 0; i--)
{
	arr1[count_arr[array[i]] - 1] = array[i];
	count_arr[array[i]]--;
}
for (k = 0; k < size; k++)
{
array[k] = arr1[k];
}
}
