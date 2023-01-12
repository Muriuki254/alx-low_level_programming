<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function to generate a random number
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n;
	int num;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	num = n % 10;
	if (num > 5)
	{
		printf("%d and is greater than 5\n", num);
	}
	else if ((num < 6) && (num < 0))
	{
		printf("%d and is less than 6 and not 0\n", num);
	}
	else
	{
		printf("%d and is 0\n", num);
	}
	return (0);
=======
#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**

 * main - main block

 * Description: Print statements based on the last digit of the random number.

 * Return: 0

 */

int main(void)

{

	int n;

	int m;



	srand(time(0));

	n = rand() - RAND_MAX / 2;

	m = n % 10;



	if (m > 5)

		printf("Last digit of %i is %i and is greater than 5\n",

		       n, m);

	else if (m == 0)

		printf("Last digit of %i is %i and is 0\n", n, m);

	else

		printf("Last digit of %i is %i and is less than 6 and not 0\n",

		       n, m);



	return (0);

>>>>>>> ef4105431b5cb796856c48752fc8eef353c599dd
}
