#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase
 *
 * Return: 0 when successful
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
