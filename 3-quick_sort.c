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
	int pivot_index;
	int lo = 0;
	int hi = size -1;

	if (size < 2)
		return;

	pivot_index = partition(array, lo, hi, array, size);
	quick_sort(array, pivot_index);
	quick_sort(array + pivot_index + 1, hi - pivot_index);
}

int partition(int array[], int lo, int hi, const int *original_array, size_t size)
{
	int pivot, i, j;

	pivot = array[hi];
	i = lo - 1;

	for (j = lo; j <= hi - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&(array[i]), &(array[j]));
		}
	}

	if ((i + 1) != hi)
	{
		swap(&(array[i + 1]), &(array[hi]));
		print_array(original_array, size);
	}

	return (i + 1);
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
