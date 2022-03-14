#include <stdio.h>

/**
 * main - print numbers 0 - 9
 * Description: uses putchar to print to standard output
 * Return: void
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	putchar(num);
	putchar('\n');
	return (0);
}
