#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main - assigns a random number to the variable n each time it is executed.
 *Return: (0) (Always success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
