#include <stdio.h>
/**
 * main - Entry point
 * Descrition: 'print alphabet lowercase and uppercase'
 * Return: always 0
 */
int main(void)
{
	int n;

	for(n = 0; n <= 9; n++;)
	{
		putchar(n + 48);
	}
	putchar('\n')
	return (0);
}
