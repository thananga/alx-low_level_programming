#include <stdio.h>
/**
 * main-prints all numbers of base16 in lowercase,followed by newline
 * Return:(0)
 */
int main(void)
{
	int n;
	char ch;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
