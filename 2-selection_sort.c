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
	size_t i, j, sml_index;
	int temp;
	bool in_wrong_position;

	if (array == NULL)
		return;

	for (i = 0; i < (size - 1); i++)
	{
		in_wrong_position = false;
		sml_index = i;
		for (j = (i + 1); j < size; j++)
		{
			if (array[sml_index] > array[j])
			{
				sml_index = j;
				in_wrong_position = true;
			}
		}

		/** swap */
		if (in_wrong_position == true)
		{
			temp = array[i];
			array[i] = array[sml_index];
			array[sml_index] = temp;

			print_array(array, size);
		}
	}

}
