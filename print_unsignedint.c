#include "main.h"

/**
 * digit_count - counts the digits.
 * @number: input int_count
 * Return: digit count
 */
int digit_count(unsigned int number)
{
	int count = 0;
	unsigned int number2 = number;

	while (number2 != 0)
	{
		number2 = number2 / 10;
		count++;
	}
	return (count);
}
/**
 * int_count - a function that prints an int_count.
 * @number: input int_count
 * Return: digit count
 */
int int_count(unsigned int number)
{
	unsigned int unint;
	int count;

	count = digit_count(number);
	unint = number;

	if (unint >= 10)
		int_count(unint / 10);
	_putchar(unint % 10 + '0');

	return (count);
}

/**
 * printint - prints a number
 * @format: format to print number
 * @pa: va_list with number to print
 * Return: number of characters printed
 */
int print_usignedint(char *format, va_list pa)
{
	unsigned int number = va_arg(pa, unsigned int);
	int numrow;
	(void)format;

	numrow = int_count(number);

	return (numrow);
}
