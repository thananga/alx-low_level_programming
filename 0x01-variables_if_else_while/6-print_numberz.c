#include <stdio.h>
/**
 * main - prints all single digit numbers of base10, followed by newline
 * Return: (0)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
