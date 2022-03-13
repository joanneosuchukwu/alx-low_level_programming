#include <stdio.h>

/**
 * main - main entry.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char acharacter;
	int ainteger;
	long along;
	long long alonglong;
	float afloat;

	printf("Size of a char: %u byte(s)\n", sizeof(acharacter));
	printf("Size of an int: %u byte(s)\n", sizeof(ainteger));
	printf("Size of a long int: %u byte(s)\n", sizeof(along));
	printf("Size of a long long int: %u bytes(s)\n", sizeof(alonglong));
	printf("Size of a float: %u byte(s)\n", sizeof(afloat));

	return (0);
}
