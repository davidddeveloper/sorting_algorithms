#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * by looking for the smallest number then swapping it to the left
 *
 * @array: the list to sort
 * @size: size of the array
 *
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	if (array == NULL)
		return;

	for (i = 0; i < (size - 1); i++)
	{
		for (j = (i + 1); j < size; j++)
		{
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;

				print_array(array, size);
			}
		}
	}

}
