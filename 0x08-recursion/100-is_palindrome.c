#include "main.h"
#include "2-strlen_recursion.c"

/**
 * check_pali - Check is pali recursively
 * @s: string
 * @len: int argument
 *
 * Return: 1 if true, 0 if false
 *
 *
 *
 */

int check_pali(char *s,  int len)
{
	if (len < 1)
		return (1);
	if (*s == s[len])
		return (check_pali(s + 1, len - 2));
	return (0);
}

/**
 * is_palindrome - Check if string is palindrome
 * @s: String argument
 *
 * Return: 1 if true, 0 if false
 */

int is_palindrome(char *s)
{
	int str_len = _strlen_recursion(s);

	return (check_pali(s, str_len - 1));
}
