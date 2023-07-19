/**
 * print_name - applies a print function to name
 * @name: to be printed
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
