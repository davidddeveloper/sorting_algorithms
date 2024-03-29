#ifndef SORT_H
#define SORT_H
#include <stddef.h>
#include <stdbool.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/** Functions prototype */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void swap_node(listint_t **, listint_t *, listint_t *);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void quick_sort_helper(int *array, int, int, size_t);
int partition(int array[], int lo, int hi, size_t);
void swap(int *a, int *b);

#endif /* SORT_H */
