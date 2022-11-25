#include "main.h"
/**
 * _abs - calculates the absolute value.
 * @number: input.
 * Return: value.
 */
int _uabs(unsigned int number)
{

		return (number);
}

/**
 * contadordigit - counts the digits.
 * @number: input integer
 * Return: digit count
 */
int ucontadordigit(unsigned int number)
{
	int count = 0;
	unsigned int number2 = number;

	if (number <= 0)
		count += 1;

	while (_uabs(number2) != 0)
	{
		number2 = number2 / 10;
		count++;
	}
	return (count);
}
/**
 * integer - a function that prints an integer.
 * @number: input integer
 * Return: digit count
 */
int uinteger(unsigned int number)
{
	unsigned int unint;
	int count;

	count = ucontadordigit(number);
	unint = number;

	if (unint >= 10)
		integer(unint / 10);
	_putchar(unint % 10 + '0');

	return (count);
}

/**
 * printint - prints a number
 * @format: format to print number
 * @pa: va_list with number to print
 * Return: number of characters printed
 */
int printunint(char *format, va_list pa)
{
	unsigned int number = va_arg(pa, int);
	unsigned int numero;
	(void)format;

	numero = uinteger(number);

	return (numero);
}
