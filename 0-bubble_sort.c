#include "sort.h"

/**
 * bubble_sort - sorts an array integers in ascending order using Bubble sort
 * @array: the array to be sorted
 * @size: size of the array
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, j, tmp;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;

				print_array(array, size);
			}
		}
	}
}
