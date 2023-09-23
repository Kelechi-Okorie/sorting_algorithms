#include "sort.h"

/**
 * bubble_sort - implements bubble sorting algorithm
 * @array: the array to sort
 * @size: the size of the array
 *
 * Description: implements bubble sorting algorithm
 * Return: always void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}

}

/**
 * swap - swaps 2 integers
 * @a: pointer to first integer
 * @b: pionter to second integer
 *
 * Description: swaps 2 integers given their addresses
 */
void swap(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}
