#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: The array to be soted
 * @size: Number of elements in @array
 */
void selection_sort(int *array, size_t size)
{
	size_t iter_array = 0, min_comp = 0, iter_comp = 0, temp = 0;

	if (array == NULL && size < 2)
		return;

	for (iter_array = 0; iter_array < (size - 1); iter_array++)
	{
		min_comp = iter_array;

		for (iter_comp = iter_array + 1; iter_comp < size; iter_comp++)
		{
			if (*(array + iter_comp) < *(array + min_comp))
				min_comp = iter_comp;
		}

		if (min_comp != iter_array)
		{
			temp = *(array + iter_array);
			*(array + iter_array) = *(array + min_comp);
			*(array + min_comp) = temp;
			print_array(array, size);
		}
	}
}
