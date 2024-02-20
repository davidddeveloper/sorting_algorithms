#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort
 *
 * @array: the array to sort
 * @size: the size of the array
 *
 * Return: nothing
 */

void quick_sort(int *array, size_t size)
{
	int loc;
	int lo = 0;
	int hi = size -1;

	if (lo < hi)
	{
		loc = partition(array, lo, hi);
		quick_sort(array, loc);
		quick_sort(array + loc + 1, size - loc - 1);
	}
}

int partition(int array[], int lo, int hi)
{
	int pi, start, end;

	start = lo;
	pi = end = hi - 1;

	while (start < end)
	{
		while (start < pi)
			start++;

		while (end > pi)
			end--;

		if (start < end)
			swap(&(array[start]), &(array[end]));
	}

	swap(&(array[pi]), &(array[end]));
	return (end);
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
