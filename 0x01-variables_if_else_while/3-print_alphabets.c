#include <stdio.h>

/**
 * main - for ch less than or equal to z putchar ch
 * Description: uses putchar to print to standard output
 * Return: void
 */
int main(void)
{
	int ch;
	int capitalch;

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	for (capitalch = 'A'; capitalch <= 'Z'; capitalch++)
	putchar(capitalch);
	putchar('\n');
	return (0);
}
