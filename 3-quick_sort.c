#include "sort.h"

/**
* quick_sorty - function that sorts an array
* @array: array to sort
* @p_array: original array
* @size: size of the array
* @p_size: original size
**/

void quick_sorty(int *array, int *p_array, size_t size, size_t p_size)
{
	size_t end = size - 1;
	size_t index;
	size_t target = 0;
	int temp_num;

	if (!array || size == 0)
	return;
