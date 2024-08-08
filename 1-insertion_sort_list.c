#include "sort.h"


void insertion_sort_list(listint_t **list)
{
	listint_t *head = NULL;

	while (*list != NULL)
	{
		listint_t *current = *list;
		*list = (*list)->next;
		if (head == NULL || current->n < head->n)
		{
			current->next = head;
			head = current;
		}
		else
		{
			listint_t *p = head;
			while (p != NULL)
			{
				if (p->next == NULL || current->n < p->next->n)
				{
					current->next = p->next;
					p->next = current;
					break;
				}
				p = p->next;
			}
		}
		print_list(head);
	}
	*list = head;
}
