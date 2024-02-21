#include "sort.h"
/**
 *
 *
 *
 *
 *
 *
 */

void quick_sort_helper(int *array, int low, int hight, size_t size)
{
	int pi;

        if (low < hight)
	{
		pi = partition(array, low, hight, size);
		quick_sort_helper(array, low, pi -1, size);
		quick_sort_helper(array, pi + 1, hight, size);
	}
}

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
	}
}

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
 *
 *
 *
 */
void swap(int *a, int *b)
{
        int temp = *a;
        *a = *b;
        *b = temp;
}
