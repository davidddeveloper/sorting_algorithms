#include "sort.h"
/**
 *
 *
 *
 *
 *
 * /
 */

void quick_sort_helper(int *array, int low, int hight)
{
	int pi;

        if (low < hight)
	{
		pi = partition(array, low, hight);
		quick_sort_helper(array, low, pi -1);
		quick_sort_helper(array, pi + 1, hight);
	}
}

void quick_sort(int *array, size_t size)
{
	int low = 0;
	int hight = (int)(size - 1);
	int pi;

	if (low < hight)
	{
		pi = partition(array, low, hight);
		quick_sort_helper(array, low, pi - 1);
		quick_sort_helper(array, pi + 1, hight);
	}
}

int partition(int array[], int lo, int hi)
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
