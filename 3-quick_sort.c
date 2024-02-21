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

void quick_sort_helper(int *array, size_t size, const int *original_array)
{
	int pivot_index;
	int lo = 0;
	int hi = size -1;

	if (size < 2)
		return;

	pivot_index = partition(array, lo, hi, original_array, size);
	quick_sort_helper(array, pivot_index - lo, original_array);
	quick_sort_helper(array + pivot_index + 1, hi - pivot_index, original_array);
}

void quick_sort(int *array, size_t size)
{
	int *original_array = array;
	quick_sort_helper(array, size, original_array);
}

int partition(int array[], int lo, int hi, const int *original_array, int size)
{
	int pivot, i, j;

	pivot = array[hi];
	i = lo - 1;

	for (j = lo; j <= hi; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&(array[i]), &(array[j]));
			print_array(original_array, size);
		}
	}

	swap(&(array[i + 1]), &(array[hi]));
	print_array(original_array, size);

	return (i + 1);
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
