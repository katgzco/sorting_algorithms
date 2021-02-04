#include "sort.h"
#include <stdbool.h>

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: The array to be soted
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	int tmp = 0;

	if (array != NULL && size >= 2)
	{
		for (i = 0; i < (size - 1); i++)
		{
			for (j = 0; j < (size - i - 1); j++)
			{
				if (*(array + j) > *(array + (j + 1)))
				{
					tmp = *(array + j);
					*(array + j) = *(array + (j + 1));
					*(array + (j + 1)) = tmp;
					print_array(array, size);
				}
			}
		}
	}
}
