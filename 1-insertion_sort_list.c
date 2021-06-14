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
	int n;
	listint_t *cur;

	cur = *list;

	if (cur->next == NULL) /*solo hay un elemento en la lista*/
		return;

	listint_t *ptr, *tmp;

	cur = cur->next;

	while (cur != NULL)
	{
		n = 0;
		ptr = cur;
		tmp = cur->prev;
		cur = cur->next; /*hasta el final de la lista*/

		while (tmp != NULL && tmp->n > ptr->n) /*empezamos a comparar*/
		{
			n++;
			tmp = tmp->prev;
		}
		if (n)
		{
			ptr->prev->next = ptr->next;
			if (ptr->next !=  NULL)
			ptr->next->prev = ptr->prev;
			if (tmp == NULL) /*este es el nodo mas pequeño*/
			{
				tmp = *list;
				ptr->prev = NULL;
				ptr->next = tmp;
				ptr->next->prev = ptr;
				*list = ptr;
			}
			else
			{
				tmp = tmp->next;
				tmp->prev->next = ptr;
				ptr->prev = tmp->prev;
				tmp->prev = ptr;
				ptr->next = tmp;
			}
		}
	}
}
