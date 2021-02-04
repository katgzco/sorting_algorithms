#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort
 * @array: The array to be soted
 * @size: Number of elements in @array
 */

void quick_sort(int *array, size_t size)
{

	if (array && size >= 2)
		quick_sort_recursion(array, 0, size - 1, size);
}

/**
 * quick_sort_recursion - Function for call recursively quick_sort function
 * @array: The array to be soted
 * @size: Number of elements in @array
 * @start: The first position in the array
 * @end: the las position in the array
 */

void quick_sort_recursion(int *array, int start, int end, size_t size)
{
	int pi = 0;

	if (start < end)
	{
		pi = partition(array, start, end, size);
		quick_sort_recursion(array, start, pi - 1, size);
		quick_sort_recursion(array, pi + 1, end, size);
	}
}

/**
 * partition -  sorts an array of integers in ascending order
 * for the Quick sort
 * @array: The array to be soted
 * @size: Number of elements in @array
 * @start: The first position in the array
 * @end: the las position in the array
 * Return: The position of the pivot
 */
int partition(int array[], int start, int end, size_t size)
{
	int pivot = *(array + end), pindex = (start - 1), i;

	for (i = start; i <= (end - 1); i++)
	{
		if (*(array + i) < pivot)
		{
			pindex++;
			swap(array + pindex, array + i, array, size);
		}
	}
	swap(array + (pindex + 1), array + end, array, size);
	return (pindex + 1);
}

/**
 * swap - Auxiliar function to swap values in an given index.
 * @value_1: first indext to be swapped
 * @value_2: second indext to be swapped
 * @array: The array to be soted
 * @size: Number of elements in @array
 */
void swap(int *value_1, int *value_2, int *array, size_t size)
{
	int tmp = 0;

	tmp = *value_1;
	*value_1 = *value_2;
	*value_2 = tmp;
	print_array(array, size);
}
