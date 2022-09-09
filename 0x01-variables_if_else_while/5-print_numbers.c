#include <stdio.h>

/**
 * main - prints all singgle digit numbers of base
 * 10 startng from 0, followed by a new file
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
