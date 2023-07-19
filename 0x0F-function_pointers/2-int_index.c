/**
 * int_index - applies comp
 * @array: the array
 * @size: size of array
 * @cmp: comp func
 *
 * Return: position
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!(array && size && cmp))
		return (-1);
	if (size < 1)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
