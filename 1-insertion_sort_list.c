#include "sort.h"
/**
 * listint_len - calculate length of list
 * @h: list header
 * Return: lenght
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
/**
 * insertion_sort_list - sorts a list
 * @list: list header
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *next, *temp, *prev;

	if (list == NULL || list == NULL)
		return;

	current = (*list)->next;
	while (current != NULL)
	{
		next = current->next;
		temp = current;

		while (temp->prev != NULL && temp->prev->n > temp->n)
		{
			prev = temp->prev;
			next = temp->next;

			if (prev->prev != NULL)
				prev->prev->next = temp;
			else
				*list = temp;

			temp->prev = prev->prev;
			temp->next = prev;
			prev->prev = temp;
			prev->next = next;

			if (next != NULL)
				next->prev = prev;
			print_list(*list);
		}
		current = next;
	}
}
