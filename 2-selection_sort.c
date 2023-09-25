#include "sort.h"
#include <limits.h>

/**
 * selection_sort - sorts an array using selection sort algorithm
 * @array: array to sort
 * @size: size of the array
 *
 * Description: sorts an array using selection sort
 * Return: always void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, imin;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		imin = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[imin])
				imin = j;
		}

		temp = array[i];
		array[i] = array[imin];
		array[imin] = temp;

		if (imin != i)
			print_array(array, size);
	}
}
