#include "sort.h"
/**
 * quick_sort - function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: array of ints to sort
 * @size: size of the array
 */


int main (void){
    int array[]= {3,4,1,7,8,5,9,2,6};
    int size = 9;

    quicksort(array, size);
    for (int i = 0; i < size; i++){
        printf("%d", array[i]);
        printf("\n");

        return 0;
    }
}
void swap (int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void quick_sort(int *array, size_t size)
{
    srand(time(NULL));
    quicksort_recursion(array, 0, size - 1);
}
void quicksort_recursion(int array[], int low , int high)
{
    if (low < high)
    {
        int pivot_index = partition(array, low, high);
        quicksort_recursion(array, low , pivot_index - 1);
        quicksort_recursion(array, pivot_index + 1, high);
    }
}
int partition (int array[], int low, int high){
    int pivot_index = low + (rand() % (high - low));

    if (pivot_index != high)
        swap(&array[pivot_index], &array[high]);
    int pivot_value = array[high];
    int i = low;

    for (int j = low; j < high; j++){
        if (array[j] <= pivot_value){
            swap(&array[i], &array[j]);
            i++;
        }
    }
    swap(&array[i], &array[high]);
    return i;
}
