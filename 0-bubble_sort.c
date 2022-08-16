#include "sort.h"
#include <stdbool.h>
/**
 *  function that sorts an array of integers in ascending order
 *  using the Bubble sort algorithm
 * 
 * 
 */
int main(void)
{

	int array[] = {};

	int size = 10;

	return (0);
}

void bubble_sort(int *array, size_t size)
{
	bool swapped = false;
	int i = 0;

	do {
		swapped = false;
		for (int j = 0; j < (size - 1 - i); j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				printf("a[%d] = %d\n", i,array[i]);
				swapped = true;
			}
		}
		i++;
	} while (swapped);
}
