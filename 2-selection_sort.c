#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers in ascending order 
 * using the Selection sort algorithm
 *
 * @array: array of ints to sort
 * @size: size of the array
 */
void selection_sort(int *array, size_t size){
	unsigned int i, j, min_pos;
	int tmp;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		int min_pos = i;
		for (j = i +1; j < size - i - 1; j++)
		{
			if (array[j] <array[min_pos]) min_pos = j;
		if (min_pos != 1)
		{
			tmp = array[i];
			array[i] = array[min_pos];
			array[min_pos] = tmp;
			print_array(array, size);
			}
		}
	}
}
