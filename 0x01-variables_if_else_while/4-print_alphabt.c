#include <stdio.h>
/**
 * main - prints alphabet in lowercase,except for q and e,followed by a newline
 * Return: (0)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar (ch);
		}
		ch++;
	}
	putchar ('\n');
	return (0);
}
