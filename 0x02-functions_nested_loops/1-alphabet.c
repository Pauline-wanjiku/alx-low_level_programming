#include "main.h"

/**
 *print_alphabet - a function prototype.
 *Return: Always 0 (Success)
 */

void print_alphabet(void)
{
char alphabets;

for (alphabets = 'a' ; alphabets <= 'z' ; alphabets++)
{
_putchar(alphabets);
}
_putchar('\n');
}
