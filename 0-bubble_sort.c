#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order using the Bubble sort algorithm
 * @size: size of the array
 * @array: array to order
 */
void bubble_sort(int *array, size_t size)
{
	size_t swapped = 1, i, temp;
	while (swapped == 1)
	{
		swapped = 0;
		for (i=0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swapped = 1;
				print_array(array, size);
			}
		}
	}
	print_array(array, size);
}
