#include "3-calc.h"

/**
* get_op_func - get function
* @s: integer
*
* Description: returns pointer to function
*
* Return: int (*)(int, int)
*/
int (*get_op_func(char *s))(int a, int b)
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

	while ((ops[i]).op != NULL)
	{
		if ((ops[i]).op[0] == s[0])
			return ((ops[i]).f);
		i++;
	}

	return (NULL);
}
