#include <calc.h>
/**
 * get_op_func - selects the correct operation
 * @s: string input
 *
 * Return: returns zeby
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
    };
    int i;

    while (ops[i].op != NULL)
    {
    	if (*s == *(ops[i].op) && *(s + 1) == '\0')
    		return (ops[i].f);
    	i = i + 1;
    }
    return (NULL);
}
