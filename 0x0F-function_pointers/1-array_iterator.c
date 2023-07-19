/**
 * array_iterator - applies func to all arrays
 * @array: the array
 * @size: size of array
 * @action: the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
