#include <sort.h>

/**
 * insertion_sort_list -  function that sorts a doubly linked list of integers in ascending order 
 * using the Insertion sort algorithm
 * 
 * @list: doubly linked list
 *
 */

int main(void){

}
listint_t *create_listint(const int *array, size_t size)
{
    listint_t *list;
    listint_t *node;
    int *tmp;

    list = NULL;
    while (size--)
    {
        node = malloc(sizeof(*node));
        if (!node)
            return (NULL);
        tmp = (int *)&node->n;
        *tmp = array[size];
        node->next = list;
        node->prev = NULL;
        list = node;
        if (list->next)
            list->next->prev = list;
    }
    return (list);
}
void insertion_sort_list(listint_t **list){
    for (int i = 1; i < length;i++){
        int key = a[i];
        int j = j - 1;
        while (j >=0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j -1;
        }
        a[j + 1] = key;
    }
}
