#include <stdio.h>
/**
 * main - main block
 * Description: a program that prints the alphabet in lowercase, followed by a new line. Print all the letters except q and e
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}

	putchar('\n');
	return (0);
}
