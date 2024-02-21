#include "sort.h"
/**
 *quick_sort_helper - sorts an array of integers
 *@array: the array to be sorted
 *@low: the lowest index of the array we wnt to sort
 *@hight: the hightest index
 *@size: the size of the array
 *
 */

void quick_sort_helper(int *array, int low, int hight, size_t size)
{
	int pi;

	if (low < hight)
	{
		pi = partition(array, low, hight, size);
		quick_sort_helper(array, low, pi - 1, size);
		quick_sort_helper(array, pi + 1, hight, size);
	}
}
/**
 *quick_sort - sorts an array of integers in accending orger using quick_sort
 *@array: the array to be sorted
 *@size: the size of the array
 *
 *
 *
 *
 */

void quick_sort(int *array, size_t size)
{

	int low = 0;
	int hight = (int)(size - 1);
	int pi;

	if (low < hight)
	{
		pi = partition(array, low, hight, size);
		quick_sort_helper(array, low, pi - 1, size);
		quick_sort_helper(array, pi + 1, hight, size);
		print_array(array, size);
	}
}

/**
 *partition - partition an aray into2 partitions around the pivot
 *@lo: the lower index of the array to be partitioned
 *@hi: the hightest index
 *@size: the size of the array
 *@array: the array to be sotrted
 *Return: an int the index of pivot
 */

int partition(int array[], int lo, int hi, size_t size)
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
		}
	}

	swap(&(array[i + 1]), &(array[hi]));
	print_array(array, size);
	return (i + 1);
}
/**
 *swap - swaps two element in array
 *@a: a pointer to the first element
 *@b: a pointer to the second element
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
