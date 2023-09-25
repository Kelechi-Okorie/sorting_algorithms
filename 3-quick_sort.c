#include "sort.h"

void q_sort(int *array, int start, int end, size_t size);
size_t partition(int *array, size_t start, size_t end, size_t size);

/**
 * quick_sort - sorts an array using quick sort algorithm
 * @array: the array to sort
 * @size: the size of the array to sort
 *
 * Description: sorts an array using quick sort algorithm
 * Return: always void
 */
void quick_sort(int *array, size_t size)
{
	q_sort(array, 0, size - 1, size);

}

/**
 * q_sort - sorts an array using quick sort algorithm
 * @array: the array to sort
 * @start: where to start sorting
 * @end: where to end sorting
 * @size: total size of the array
 *
 * Description: sorts an array usin quick sort algorithm
 * Return: alwayls void
 */
void q_sort(int *array, int start, int end, size_t size)
{
	size_t p_index;

	if (start < end)
	{
		p_index = partition(array, start, end, size);
		q_sort(array, start, p_index - 1, size);
		q_sort(array, p_index + 1, end, size);
	}
}

/**
 * partition - partitions an array for quick sort
 * @array: the array to partition
 * @start: where to start partitioning the array
 * @end: where to end partitioning the array
 * @size: total size of the array
 *
 * Description: partitions an array for quick sort
 * Return: always void
 */
size_t partition(int *array, size_t start, size_t end, size_t size)
{
	int pivot, temp;
	size_t i, j;

	pivot = array[end];
	i = start - 1;

	for (j = start; j < end; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			temp = array[j];
			array[j] = array[i];
			array[i] = temp;

			print_array(array, size);
		}
	}

	temp = array[i + 1];
	array[i + 1] = array[end];
	array[end] = temp;

	return (i + 1);
}
