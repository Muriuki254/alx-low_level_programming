#include <stdio.h>
<<<<<<< HEAD
#include <stdlib.h>

/**
 * main - returns alphabets both except e and q
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
=======

/**

 * main - main block

 * Description: Use `putchar` to print all letters but the letter 'q' and 'e'.

 * Return: 0

 */

int main(void)

{

	char c = 'a';



	while (c <= 'z')

	{

		if (c != 'q' && c != 'e')

			putchar(c);

		c++;

	}

	putchar('\n');



	return (0);

>>>>>>> ef4105431b5cb796856c48752fc8eef353c599dd
}
