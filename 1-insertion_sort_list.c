#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
* insertion_sort_list - This function implements the selection sort algorithm.
* @list: Pointer to the array that will be sorted.
* Return: Doesn't return.
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *cur, *ptr, *tmp;

	if (!list || !(*list)->next)
		return;
	cur = *list;
	cur = cur->next;
	while (cur != NULL)
	{
		ptr = cur;
		cur = cur->next; /*hasta el final de la lista*/
		if (ptr->n < ptr->prev->n)
		{
			tmp = ptr->prev;
			while (tmp != NULL && tmp->n > ptr->n) /*empezamos a comparar*/
			{
				tmp->next = ptr->next;
				if (ptr->next !=  NULL)
					ptr->next->prev = ptr->prev;
				if (tmp->prev == NULL) /*este es el nodo mas pequeño*/
				{
					ptr->prev = NULL;
					ptr->next = tmp;
					ptr->next->prev = ptr;
					*list = ptr;
					print_list(*list);
					break;
				}
				else
				{
					tmp->prev->next = ptr;
					ptr->prev = tmp->prev;
					tmp->prev = ptr;
					ptr->next = tmp;
					print_list(*list);
				}
				tmp = tmp->prev->prev;
			}
		}
	}
}
