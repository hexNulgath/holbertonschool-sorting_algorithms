#include "sort.h"
/**
 * quick_sort_rec - order using the Quick sort algorithm
 * @array: array to order
 * @hi: max index to compare
 * @lo: lowest indes to compare
 * @size: size of the whole array
 */
void quick_sort_rec(int *array, size_t lo, size_t hi, size_t size)
{
	size_t i, j, pivot;
	int temp;

	if (lo >= hi)
		return;

	pivot = hi;
	i = lo;

	for (j = lo; j < hi; j++)
	{
		if (array[j] < array[pivot])
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			if (i != j)
				print_array(array, size);
			i++;
		}
	}
	temp = array[i];
	array[i] = array[pivot];
	array[pivot] = temp;
	if (array[i] != array[pivot])
		print_array(array, size);
	if (i > 0)
		quick_sort_rec(array, lo, i - 1, size);
	quick_sort_rec(array, i + 1, hi, size);
}
/**
 * quick_sort - order using the Quick sort algorithm
 * @array: array to order
 * @size: size of the whole array
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	quick_sort_rec(array, 0, size - 1, size);
}
