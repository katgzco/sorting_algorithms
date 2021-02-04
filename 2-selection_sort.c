#include "sort.h"


void selection_sort(int *array, size_t size)
{
	size_t iter_array = 0, min_comp = 0, iter_comp = 0, temp = 0;

	if (array && (array + 1) && size >= 2)
	{

		for (iter_array = 0; iter_array < (size - 1); iter_array++)
		{
			min_comp = iter_array;

			for (iter_comp = iter_array + 1; iter_comp < size; iter_comp++)
			{
				if (*(array + iter_comp) < *(array + min_comp))
					min_comp = iter_comp;
			}
			temp = *(array + iter_array);
			*(array + iter_array) = *(array + min_comp);
			*(array + min_comp) = temp;
			print_array(array, size);
		}
	}
}
