#include <stdio.h>

/**
 * main - prints to stderr
 * Return: 1
 */

int main(void)
{
	char *string;
	long len = 59;
	long fd = 2;
	long syscall = 1;
	long ret = 0;

	string = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	__asm__ ("syscall"
	: "=a" (ret)
	: "a" (syscall),
	"D" (fd),
	"S" (string),
	"d" (len));
	return (1);
}
