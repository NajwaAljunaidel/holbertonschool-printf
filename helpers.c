#include "main.h"

/**
 * write_digits - Converts and writes an unsigned int as decimal digits.
 * @number: The number to display.
 *
 * Return: Number of digits printed, or -1 on error.
 */
static int write_digits(unsigned int number)
{
	char buffer[12];
	int index = 0, printed = 0;

	if (number == 0)
		return (write(1, "0", 1) == -1 ? -1 : 1);

	while (number != 0)
	{
		buffer[index++] = '0' + (number % 10);
		number /= 10;
	}

	while (--index >= 0)
	{
		if (write(1, &buffer[index], 1) == -1)
			return (-1);
		printed++;
	}

	return (printed);
}

/**
 * print_char - Outputs a single character.
 * @c: Character to print.
 *
 * Return: 1 if successful, -1 on failure.
 */
int print_char(char c)
{
	return (write(1, &c, 1) == -1 ? -1 : 1);
}

/**
 * print_string - Outputs a string, or (null) if s is NULL.
 * @s: The string to print.
 *
 * Return: Number of characters printed or -1 if failed.
 */
int print_string(char *s)
{
	int length = 0;

	if (!s)
		s = "(null)";

	while (s[length])
		length++;

	return (write(1, s, length) == -1 ? -1 : length);
}

/**
 * print_percent - Prints the '%' character.
 *
 * Return: 1 on success, or -1 if write fails.
 */
int print_percent(void)
{
	return (write(1, "%", 1) == -1 ? -1 : 1);
}

/**
 * print_integer - Displays an integer using base 10.
 * @n: The integer value to display.
 *
 * Return: Count of characters printed, -1 if error.
 */
int print_integer(int n)
{
	unsigned int positive;
	int total = 0, res;

	if (n < 0)
	{
		if (write(1, "-", 1) == -1)
			return (-1);
		total++;
		positive = (unsigned int)(-1L * n);
	}
	else
	{
		positive = (unsigned int)n;
	}

	res = write_digits(positive);
	if (res == -1)
		return (-1);

	return (total + res);
}

