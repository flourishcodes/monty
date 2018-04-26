#include "monty.h"

/**
 * check_val - checks if each value is a digit
 * @str: takes the value
 * Return: -1 if one of the values is not digit, else 1
 */
int check_val(char *str)
{
	int i = 0;

	while (str)
	{
		if (str[i] > 47 && str[i] < 58)
			i++;
		else
			return (-1);
	}
	return (1);
}
