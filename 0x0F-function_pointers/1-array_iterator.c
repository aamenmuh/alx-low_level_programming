#include <stdio.h> 
/**
  * array_iterator - applies action over an array
  * @array: the array
  * @size: size of array
  * @action: the actino to be taken
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}