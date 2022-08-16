#include "sort.h"
#include <stdbool.h>
/**
 *bubble_sort - function that sorts an array of integers in ascending order
 *using the Bubble sort algorithm
 *@array: array of int to sort
 *@size: size of the array
 *return: nothing void
 */
void bubble_sort(int *array, size_t size)
{
	bool swapped = false;
	size_t i, j;
	int temp;

	do {
		swapped = false;
		for (int j = 0; j < (size - 1 - i); j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				printf("a[%lu] = %d\n", i,array[i]);
				swapped = true;
			}
		}
		i++;
	} while (swapped);
}
