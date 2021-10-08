#include "main.h"

/**
 * driver - selector for type of fun.
 * @format: string.
 * Description: the function loops through the structs
 * selector[] ment of the struct.
 * Return: a pointer
 * structype selector - Struct
 */
int (*driver(char *format))(char *format, va_list)
{
	int i;

	/**
	 * structype selector[] - pair char type with its corosponding function.
	 * @c: char
	 * @s: string
	 * @d: any int number
	 * @i: int number
	 * @u: unsigned int number
	 * @x: hexadecimal
	 * @o: octal numbers
	 * @p: ponter type
	 * 
	 */
	structype selector[] = {
		{"%c", printc},
		{"%s", printstr},
		{"%d", printint},
		{"%i", printint},
		{"%u", print_usignedint},
		{"%%", printpercent},
		{"%x", printhex},
		{"%X", printHEX},
		{"%o", printocta},
		{"%p", printhex},
		{NULL, NULL}};

	if (format[1] == ' ' || format[1] == '\0')
		return (NULL);
	for (i = 0; selector[i].q; i++)
	{
		if (format[1] == selector[i].q[1])
			return (selector[i].u);
	}
	return (NULL);
}
