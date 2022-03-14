#include <stdio.h>

/**
 * main - lower case alphabets in reverse
 * Description: uses putchar to print to standard output
 * Return: void
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	putchar(ch);
	putchar('\n');
	return (0);
}

