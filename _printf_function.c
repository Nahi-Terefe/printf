#include "main.h"

/**
 * print_single_char - print char.
 * @c: operator
 * Return: function
 */
int print_single_char(va_list c)
{
    char var = (char)va_arg(c, int);

    _putchar(var);
    return (1);
}

/**
 * print_string_char - print string.
 * @s: operator
 * Return: function
 */
int print_string_char(va_list s)
{
    char *string;
    int k;

    string = va_arg(s, char *);
    if (string == NULL)
    {
        string = "(null)";
    }
    for (k = 0; string[k] != '\0'; k++)
    {
        _putchar(string[k]);
    }
    return (k);
}

/**
 * print_decimal - prints a decimal.
 * @d: operator
 * Return: function
 */
int print_decimal(va_list d)
{
    int decimal;
    int negative = 0;
    unsigned int num;

    decimal = va_arg(d, int);
    if (decimal < 0)
    {
        _putchar('-');
        negative = 1;
        num = decimal * -1;
    }
    else
    {
        num = decimal;
    }
    if (num > 9)
        return (negative + the_range(num));
    _putchar(num + '0');
    return (1 + negative);
}

/**
 * the_range - function to find n
 *@n: number of members
 * Return:0
 */
int the_range(unsigned int n)
{
    unsigned int n, num_char;
    int count = 0;

    if (n != 0)
    {
        n = (n / 10);
        num_char = (n % 10);
        count += the_range(n);
        count++;
        _putchar(num_char + '0');
        return (count);
    }
    return (0);
}
