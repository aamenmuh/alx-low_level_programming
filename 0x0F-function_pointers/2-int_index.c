/**
 * int_index - returns index of array
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer to comparison function
 *
 * Return: index of array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);

	return (-1);
}
