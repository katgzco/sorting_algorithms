#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort
 * @array: The array to be soted
 * @size: Number of elements in @array
 */
void quick_sort(int *array, size_t size)
{
		quick_sort_recursion(array, size, 0, size - 1);
}

/**
 * quick_sort_recursion - Function for call recursively quick_sort function
 * @array: The array to be soted
 * @size: Number of elements in @array
 * @start: The first position in the array
 * @end: the las position in the array
 */
void quick_sort_recursion(int *array, size_t size, int start, int end)
{
	int p;

	if (start < end)
	{
		p = partition(array, size, start, end);
		quick_sort_recursion(array, size, start, p - 1);
		quick_sort_recursion(array, size, p + 1, end);
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
int partition(int *array, size_t size, int start, int end)
{
	int pivot = array[end], i = start, j;

	for (j = start; j < end; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j)
				swap(array + i, array + j, array, size);
			i++;
		}
	}
	swap(array + i, array + end, array, size);

	return (i);
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
