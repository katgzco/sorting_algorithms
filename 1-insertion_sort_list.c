#include "sort.h"

void insertion_sort_list(listint_t **list)
{
    listint_t *current = (*list)->next, *tmp_store = NULL, *current_next = NULL;

    if (list != NULL && *list != NULL && current != NULL)
    {
		while(current)
		{
			current_next = current->next;
				while (current->prev && current->n < current->prev->n)
				{
					if (current->prev->prev != NULL)
						current->prev->prev->next = current;
					else
						*list = current;
					tmp_store = current->prev->prev;
					current->prev->prev = current;
					if (current->next != NULL)
						current->next->prev = current->prev;
					current->prev->next = current->next;
					current->next = current->prev;
					current->prev =  tmp_store;
					print_list(*list);
				}
				current = current_next;
		}
	}
}
