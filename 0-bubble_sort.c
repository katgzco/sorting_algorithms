#include "sort.h"
#include <stdbool.h>

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: The array to be soted
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	bool swapped = true;
	size_t i = 0;
	int tmp = 0;

	if (array != NULL && size > 2)
	{
		while (swapped)
		{
			swapped = false;
			for (i = 0; i < size; i++)
			{
				if (i < (size - 1) && *(array + i) > *(array + (i + 1)))
				{
					tmp = *(array + i);
					*(array + i) = *(array + (i + 1));
					*(array + (i + 1)) = tmp;
					swapped = true;
					print_array(array, size);
				}
			}
		}
	}
}
