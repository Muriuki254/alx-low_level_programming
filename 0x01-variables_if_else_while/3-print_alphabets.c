#include <stdio.h>
<<<<<<< HEAD
#include <stdlib.h>

/**
 * main - returns alphabets both lower and upper cases
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}

	putchar('\n');
	return (0);
=======

/**

 * main - main block

 * Description: Use `putchar` to print lowercase and then uppercase alphabet.

 * Return: 0

 */

int main(void)

{

	char c = 'a';



	while (c <= 'z')

	{

		putchar(c);

		c++;

	}



	c = 'A';



	while (c <= 'Z')

	{

		putchar(c);

		c++;

	}



	putchar('\n');



	return (0);

>>>>>>> ef4105431b5cb796856c48752fc8eef353c599dd
}
