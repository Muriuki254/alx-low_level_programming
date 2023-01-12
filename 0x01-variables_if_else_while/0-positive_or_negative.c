#include <stdio.h>
#include <stdlib.h>
#include <time.h>
<<<<<<< HEAD
=======

>>>>>>> ef4105431b5cb796856c48752fc8eef353c599dd
/**
 * main - main function to generate a random number
 *
 * Return: Always 0 (Success)
<<<<<<< HEAD
 */
=======
 *
 */

>>>>>>> ef4105431b5cb796856c48752fc8eef353c599dd
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
