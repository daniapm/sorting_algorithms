#include "sort.h"

/**
*
*
*
*
*/

void quick_sort(int *array, size_t size)
{
    int lw, hi;
    lw = 0;
    hi = size - 1;

    _quick_sort(array, lw, hi, size);
}

void _quick_sort(int *array, int lw, int hi, size_t size)
{
    
    if (lw < hi)
    {
       
        int pi = partition(array, lw, hi, size);
 
        
        _quick_sort(array, lw, pi - 1, size);
        _quick_sort(array, pi + 1, hi, size);
    }

}
int partition(int *array, int lw, int hi, size_t size)
{
    int pivot = array[hi]; 
    int i = (lw - 1);  
 
    for (int j = lw; j <= hi - 1; j++)
    {
        
        if (array[j] < pivot)
        {
            i++;
            _swap(&array[i], &array[j]);
            /*print_array(array, size);*/
        }
    }
    _swap(&array[i + 1], &array[hi]);
    print_array(array, size);
    return (i + 1);
}

void _swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
