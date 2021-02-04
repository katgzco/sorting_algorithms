#include "sort.h"


void swap(int *value_1, int *value_2)
{
			int tmp = 0;

			tmp = *value_1;
			*value_1 = *value_2;
			*value_2 = tmp;
}
int partition(int array[], int start, int end, size_t size)
{
	int pivot = *(array + end), pindex = (start - 1), i;

	for (i = start; i <= (end - 1); i++)
	{
		if (*(array + i) < pivot)
		{
			pindex++;
			swap(array + pindex, array + i);
		}
	}
	swap(array + (pindex + 1), array + end);
	print_array(array, size);
	return (pindex + 1);
}

void quick_sort_recursion(int *array, int low, int high, size_t size)
{
	int pi = 0;

	if (low < high)
	{
		pi = partition(array, low, high, size);
		quick_sort_recursion(array, low, pi - 1, size);
		quick_sort_recursion(array, pi + 1, high, size);
	}
}

void quick_sort(int *array, size_t size)
{
	if(array && (array + 1) && size >= 2)
	{
		int	high = (int) size -1;
		quick_sort_recursion(array, 0, high, size);
	}
}

