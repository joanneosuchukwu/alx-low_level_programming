#include <stdio.h>

/**
 * main - print all alphabets except e and q
 * Description: uses putchar to print to standard output
 * Return: void
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if(ch != 'e' && ch != 'q')
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

