#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - Function to select the correct operation function
 * @s: Operator string
 * Return: Pointer to the corresponding function, or NULL if not found
 */
int (*get_op_func(char *s))(int, int)
{
    int i;

    struct op {
        char *op;
        int (*f)(int, int);
    };

    struct op ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };

    i = 0;
    while (ops[i].op)
    {
        if (*(ops[i].op) == *s && s[1] == '\0')
            return (ops[i].f);
        i++;
    }
    return (NULL);
}
