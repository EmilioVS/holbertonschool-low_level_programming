#include <stdlib.h>
/**
* array_iterator - function that executes the function given as
* a parameter on the element of an array.
* @array: pointer to array
* @size: Size of the array
* @action: action to iterate throw array
* Return: Nothing.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;
if (action == NULL || array == NULL)
return;
for (; i < size; i++)
action(array[i]);
}
