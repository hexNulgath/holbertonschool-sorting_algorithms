#include "sort.h"
/**
 * quick_sort_rec - order using the Quick sort algorithm
 * @array: array to order
 * @hi: max index to compare
 * @lo: lowest indes to compare
 * @size: size of the whole array
 */
void quick_sort_rec(int *array, size_t hi, size_t lo, size_t size)
{
	size_t i, pivot;
	int temp;

	pivot = hi;
	i = lo;
	while (i < pivot)
	{
		if (array[pivot] < array[i])
		{
			temp = array[pivot - 1];
			array[pivot - 1] = array[pivot];
			if (pivot - 1 == i)
				array[pivot] = temp;
			else
			{
				array[pivot] = array[i];
				array[i] = temp;
			}
			pivot = pivot - 1;
		}
		else
			i++;
	}
	print_array(array, size);
	if (pivot > lo)
	{
		quick_sort_rec(array, pivot - 1, lo, size);
	}
	if (pivot < hi)
	{
		quick_sort_rec(array, hi, pivot + 1, size);
	}
}
/**
 * quick_sort - order using the Quick sort algorithm
 * @array: array to order
 * @size: size of the whole array
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_rec(array, size - 1, 0, size);
}
