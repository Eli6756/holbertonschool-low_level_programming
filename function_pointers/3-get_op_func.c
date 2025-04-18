#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - selects the correct operation function
 * @s: the operator string
 *
 * Return: pointer to the correct function, or NULL
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
int i = 0;

while (ops[i].op)
{
if (*s == *(ops[i].op) && s[1] == '\0')
return (ops[i].f);
i++;
}

return (NULL);
}
