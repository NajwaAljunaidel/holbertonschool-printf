#include "main.h"

/**
 * write_unsigned - Recursively writes unsigned integers as decimal.
 * @num: Unsigned integer to write.
 *
 * Return: Count of digits printed, or -1 if write fails.
 */
static int write_unsigned(unsigned int num)
{
	char buffer[12];
	int index = 0, written = 0;

	if (num == 0)
	{
		if (write(1, "0", 1) == -1)
			return (-1);
		return (1);
	}

	while (num > 0)
	{
		buffer[index++] = (num % 10) + '0';
		num /= 10;
	}

	while (index--)
	{
		if (write(1, &buffer[index], 1) == -1)
			return (-1);
		written++;
	}

	return (written);
}

/**
 * print_char - Outputs a single character.
 * @c: The character to output.
 *
 * Return: 1 if successful, -1 on failure.
 */
int print_char(char c)
{
	return (write(1, &c, 1) == -1 ? -1 : 1);
}

/**
 * print_string - Outputs a string of characters.
 * @str: The string to print. If NULL, prints "(null)".
 *
 * Return: Total characters printed, or -1 on failure.
 */
int print_string(char *str)
{
	int len = 0;

	if (!str)
		str = "(null)";
	while (str[len])
		len++;

	if (write(1, str, len) == -1)
		return (-1);

	return (len);
}

/**
 * print_percent - Prints a literal percent sign.
 *
 * Return: 1 on success, -1 if write fails.
 */
int print_percent(void)
{
	return (write(1, "%", 1) == -1 ? -1 : 1);
}

/**
 * print_integer - Prints a signed integer.
 * @n: Integer to print.
 *
 * Return: Count of printed characters, or -1 on failure.
 */
int print_integer(int n)
{
	unsigned int num;
	int total = 0, result;

	if (n < 0)
	{
		if (write(1, "-", 1) == -1)
			return (-1);
		total++;
		num = (unsigned int)(-1 * (long)n);
	}
	else
	{
		num = (unsigned int)n;
	}

	result = write_unsigned(num);
	if (result < 0)
		return (-1);

	total += result;
	return (total);
}

