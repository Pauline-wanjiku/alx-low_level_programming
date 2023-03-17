#include <stdio.h>

/**
 *main - Prints all single digit numbers of base 10 starting 0.
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int numbers;

	for (numbers = 0 ; numbers < 10 ; numbers++)
		putchar (numbers + '0');
	putchar ('\n');
	return (0);
}
