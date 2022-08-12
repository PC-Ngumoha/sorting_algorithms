#include "sort.h"


/**
* selection_sort - sorts an array using the selection sort algorithm
* @array: array to sort
* @size: size of the array
*
* Return: void
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	size_t min_index;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		min_index = j - 1;
		while (j < size)
		{
			if (array[j] < array[min_index])
				min_index = j;
			j++;
		}
		swap(&array[i], &array[min_index]);
		print_array(array, size);
		i++;
	}
}
