#include <stdio.h>
/**
 * main - prints all single digit numbers of base10, followed by newline
 * Return: (0)
 */
int main(void)
{
	int num = 0;

	for (num < 10; num++)
	{
		printf(num);
	}
	putchar('\n');
	return (0);
}
