#include "sort.h"

/**
 * quick_sorty - function that sorts an array
 * @array: array to sort
 * @p_array: original array
 * @size: size of the array
 * @p_size: original size
*/

void quick_sorty(int *array, int *p_array, size_t size, size_t p_size)
{
	size_t end = size - 1;
	size_t index;
	size_t target = 0;
	int temp_num;

	if (!array || size == 0)
		return;

	for (index = 0; index < end; index++)
	{
		if (array[end] > array[index])
		{
			temp_num = array[index];
			array[index] = array[target];
			array[target] = temp_num;
			target++;

		if (index >= target)
			print_array(p_array, p_size);
		}
	}

	temp_num = array[end];
	array[end] = array[target];
	array[target] = temp_num;

	if (end != target && array[index] != array[target])
		print_array(p_array, p_size);
	quick_sorty(&array[0], p_array, target, p_size);
	quick_sorty(&array[target + 1], p_array, end - target, p_size);
}

/**
 * quick_sort - function that sorts an array
 * @array: array to sort
 * @size: array size
*/
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quick_sorty(array, array, size, size);
}
