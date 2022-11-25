#include "main.h"
/**
 * printocta - prints a hexadecimal
 * @format: format to print hexadecimal
 * @pa: list that contains the hexadecimal
 * Return: number.
 */
int printbin(char *format, va_list pa)
{
	unsigned int num = va_arg(pa, unsigned int);
	unsigned int copia;
	char *bin;
	int i, i2 = 0, contame = 0;
	(void)format;

	if (num == 0)
		return (_putchar('0'));
	for (copia = num; copia != 0; i2++)
	{
		copia = copia / 2;
	}
	bin = malloc(i2);
	if (!bin)
		return (-1);
	for (i = i2 - 1; i >= 0; i--)
	{
		bin[i] = num % 2 + '0';
		num = num / 2;
	}
	for (i = 0; i < i2 && bin[i] == '0'; i++)
		;
	for (; i < i2; i++)
	{
		_putchar(bin[i]);
		contame++;
	}
	free(bin);
	return (contame);
}
