#include "main.h"
/**
 * printf - function that produces output according to a formaint.
 * @format: is a character string.
 * Return: the number of characters printed.
 **/
int _printf(const char *format, ...)
{
	int cont, a = 0;
	const char letter;
	va_list lis;
	
	va_start(lis, format);
	while (!format)
	{
		return (-1);
	}
	while (format[a] == "%")
	{
		a++;
		if (format[a] == "c")
		{

		}
		if (format[a] == "s")
		{

}
