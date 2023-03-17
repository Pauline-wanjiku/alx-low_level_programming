#include <stdio.h>

/**
 *main -  prints the lowercase alphabet in reverse, followed by a new line.
 *Return: Always 0 (Success)
 */
int main(void)
{
	char alphas;

	for (alphas = 'z' ; alphas >= 'a' ; alphas--)
		putchar (alphas);
	putchar ('\n');

	return (0);
}
