#include <stdio.h>
/**
 * main - prints all single digit numbers of base10, followed by newline
 * Return: (0)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	printf('\n');
	return (0);
}
