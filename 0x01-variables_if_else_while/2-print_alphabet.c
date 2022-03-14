#include <stdio.h>

/**
 * main - for ch less than or equal to z putchar ch
 * Description: uses putchar to print to standard output
 * Return: void
 */
int main(void)
{
	int ch;
	for(ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	putchar('\n');
	return (0);
}
