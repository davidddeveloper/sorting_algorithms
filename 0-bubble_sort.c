#include "sort.h"

/**
 * bubble_sort - sort an array of integers in ascending order
 * by comparing two element and swaps the smallest to the left.
 *
 * @array: the list to sort
 * @size: size of the array
 *
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	bool is_swap;
	size_t i, j;

	for (i = 0; i < (size - 1); i++)
	{
		is_swap = false;
		for (j = 0; j < (size - 1 - i); j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				print_array(array, size);
				is_swap = true;
			}
		}
		if (is_swap == false)
			break;
	}
}
