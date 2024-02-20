#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 *insertion_sort_list - sorts a doubly linked list of integers
 *in ascending order using the Insertion sort algorithm
 *
 *@list: the doubly linked list to sort
 *
 *
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *pr, *key, *current;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}
	current = (*list)->next;
	while (current != NULL)
	{
		key = current;
		pr = key->prev;
		while (pr != NULL && (pr->n > key->n))
		{
			swap_node(list, pr, key);
			pr = key->prev;
			print_list(*list);
		}
		current = current->next;
	}
}
/**
 *swap_node - swaps 2 nodes
 *@list: the list to be sorted
 *@prev: the first node
 *@next: the 2nd node
 *
 */
void swap_node(listint_t **list, listint_t *prev, listint_t *next)
{
	if (prev->prev != NULL)
		prev->prev->next = next;
	else
		*list = next;
	if (next->next != NULL)
		next->next->prev = prev;
	prev->next = next->next;
	next->prev = prev->prev;
	next->next = prev;
	prev->prev = next;
}
