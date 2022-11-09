#include "main.h"
/**
 * op_c - adds a char
 * @c: the char
 * Return: 1
 */

int op_c(va_list c)
{
	_putchar(va_arg(c, int));
	return(1);
}

/**
 * op_s - adds a string
 * @s: the string
 * Return: count
 */

int op_s(va_list s)
{
	int count;
	char *f;

	f = va_arg(s, char *);
	for (count = 0; f[count] != '\0'; count++)
	{
		_putchar(f[count]);
		count++;

	}
	return (count);
}
