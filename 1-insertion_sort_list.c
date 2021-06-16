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
	listint_t *cur;

	if (!list || !(*list)->next)
		return;
	
	cur = *list;

	listint_t *ptr, *tmp;

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
				printf("while: temp = %d, ptr = %d\n", tmp->n, ptr->n);
			
				tmp->next = ptr->next;
				printf("temp->next = %d\n", tmp->next->n);
				if (ptr->next !=  NULL)
				{
					ptr->next->prev = ptr->prev;
					printf("ptr->next->prev->n = %d\n", ptr->next->prev->n);
				}
				if (tmp->prev == NULL) /*este es el nodo mas pequeño*/
				{
					tmp = *list;
					ptr->prev = NULL;
					ptr->next = tmp;
					ptr->next->prev = ptr;
					*list = ptr;
					print_list(*list);
				}
				else
				{	
					
					tmp = tmp->next;
					tmp->prev->next = ptr;
					printf("tmp->prev->next->n = %d\n", tmp->prev->next->n);
					ptr->prev = tmp->prev;
					printf("ptr->prev->n = %d\n", ptr->prev->n);
					tmp->prev = ptr;
					ptr->next = tmp;
					print_list(*list);
				}
				tmp = tmp->prev;	

			}
		}
	}
}
