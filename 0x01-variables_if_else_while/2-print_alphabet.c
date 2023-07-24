#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: a C program that displays all the lowercase alphabets from 'a' to 'z' 
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

	putchar('\n');
	return (0);
}
