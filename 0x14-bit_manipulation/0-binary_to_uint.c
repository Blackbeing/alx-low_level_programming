#include "main.h"
/**
 * _pow_recursion - Find value of number raised to the power of a number
 * @x: int argument
 * @y: int argument
 *
 * Return: x raised to power of y
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

/**
 * _strlen - Get length of string
 * @str: Pointer to string
 *
 * Return: Length of string
 */

unsigned int _strlen(const char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * _is_num - Check if character is number
 * @c: char argument
 *
 * Return: 1 if true, 0 if false
 */

unsigned int _is_num(char c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}


/**
 * binary_to_uint - Convert binary string to unsigned int
 * @b: string argument
 *
 * Return: Unsigned int value of binary string
 */

unsigned int binary_to_uint(const char *b)
{
	/*
	 * STR_LEN = GET STRING LENGTH
	 * POS = 0
	 * NUM = 0
	 * IF B == NULL
	 *  RETURN 0;
	 * WHILE (STR_LEN--)
	 *  C = STRING[STR_LEN]
	 *  IF (C in [A-Z])
	 *	RETURN 0;
	 *  INT POWER = STRING[STR_LEN) - '0' # negate 0 to get int value
	 *  NUM = NUM + ((POW(2, POS) * INT(c))
	 *  POS++;
	 *
	 *  RETURN NUM;
	 *
	 */
	unsigned int str_len = _strlen(b);
	unsigned int pos = 0, num = 0;
	char c;

	if (b == NULL)
		return (0);
	while (str_len--)
	{
		c = b[str_len];
		if (!(_is_num(c)))
			return (0);
		num = num + (_pow_recursion(2, pos) * (c - '0'));
		pos++;
	}
	return (num);
}
