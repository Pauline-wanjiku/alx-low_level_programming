# 0x02. C - Functions, nested loops
 The tasks covered the following:

- What are nested loops and how to use them
- What is a function and how do you use functions
- What is the difference between a declaration and a definition of a function
- What is a prototype
- Scope of variables
- What are the gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89
- What are header files and how to to use them with #include

- **The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h**

### TASKS
#### 0. 0_putchar
program that prints _putchar, followed by a new line.
The main.h contains the putchar
```
#include "main.h"

/**
 *main - Prints putchar 
 *Return: Always 0 (Success) 
 */

int main(void)
{ 
        _putchar('_');
        _putchar('p');
        _putchar('u');
        _putchar('t');
        _putchar('c');
        _putchar('h');
        _putchar('a');
        _putchar('r');
        _putchar('\n');
return (0);
```
#### 1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game

function that prints the alphabet, in lowercase, followed by a new line.
- Prototype: void print_alphabet(void);
- You can only use _putchar twice in your code

```
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
```
#### 2. 10 x alphabet
function that prints 10 times the alphabet, in lowercase, followed by a new line.

- Prototype: void print_alphabet_x10(void);
- You can only use _putchar twice in your code

```
#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
        char alphabet;
        int intial;

        intial = 0;

        while (intial < 10)
        {
                alphabet = 'a';
                while (alphabet <= 'z')
                {
                        _putchar(alphabet);
                        alphabet++;
                }
                _putchar('\n');
                intial++;
        }
}
```

#### 3. islower

function that checks for lowercase character.

- Prototype: int _islower(int c);
- Returns 1 if c is lowercase
- Returns 0 otherwise

```
#include "main.h"
/**
 * _islower-check if character is lowercase.
 * @c:character to check if it islowercase.
 * Return:0-if lowercase,1-if not.
 */

int _islower(int c)
{
        if (c >= 'a' && c <= 'z')
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
```

#### 4. isalpha

 function that checks for alphabetic character.

- Prototype: int _isalpha(int c);
- Returns 1 if c is a letter, lowercase or uppercase
- Returns 0 otherwise

```
#include "main.h"
/**
  * _isalpha - Checks for alphabetic character
  * @c: The character to be checked
  *
  * Return: 1 for alphabetic character or 0 for anything else
  */

int _isalpha(int c)
{
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
                return (1);
        }
        return (0);
}

```
#### 5. Sign

unction that prints the sign of a number.

- Prototype: int print_sign(int n);
- Returns 1 and prints + if n is greater than zero
- Returns 0 and prints 0 if n is zero
- Returns -1 and prints - if n is less than zero

```
#include "main.h"

/**
  * print_sign - Prints the sign of a number
  * @n: The number to be checked
  *
  * Return: 1 for positive num, -1 for negative num or zero for anything else
  */

int print_sign(int n)
{
        if (n > 0)
        {
                _putchar (43);
                return (1);
        }
        else if (n == 0)
        {
                _putchar (48);
                return (0);
        }
        else
        {
                _putchar (45);
                return (-1);
        }
}

```
#### 6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you

 function that computes the absolute value of an integer.

- Prototype: int _abs(int);
*The standard library provides a similar function: abs. Run ``` man abs ``` to learn more.

```
#include "main.h"

/**
  * _abs - Computes the absolute value of an integer.
  * @c: The number to be computed.
  *
  * Return: Absolute value of number or zero
  */

int _abs(int n)
{
        if (n < 0)
        {
                int absolValue;

                absolValue = n * -1;

                return (absolValue);
        }

        return (n);
}
```
#### 7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important

function that prints the last digit of a number.

- Prototype: int print_last_digit(int);
- Returns the value of the last digit

```
#include "main.h"

/**
  * print_last_digit - Prints the last digit of a number
  * @n: The number to be treated
  *
  * Return: Value of the last digit of number
  */

int print_last_digit(int n)
{
        int lastDigit;

        lastDigit = n % 10;

        if (lastDigit < 0)
        {
                lastDigit *= -1;
        }
        _putchar(lastDigit + '0');

        return (lastDigit);
}
```
#### 9. Learn your times table
unction that prints the 9 times table, starting with 0.

- Prototype: void times_table(void);
- Format: see example

```
#include "main.h"
/**
 * jack_bauer - Prints every minute of the day of
 *           Jack Bauer, starting from 00:00 to 23:59.
 */


void jack_bauer(void)
{

        int hour, minute;

        for (hour = 0; hour <= 23; hour++)
        {
                for (minute = 0; minute <= 59; minute++)
                {
                        _putchar((hour / 10) + '0');
                        _putchar((hour % 10) + '0');
                        _putchar(':');
                        _putchar((minute / 10) + '0');
                        _putchar((minute % 10) + '0');
                        _putchar('\n');
                }
        }
}
```
#### 9. Learn your times table
function that prints the 9 times table, starting with 0.

- Prototype: void times_table(void);
- Format: see example

```
#include "main.h"

/**
  * times_table - Prints the 9 times table, starting with 0
  *
  * Return: empty output
  */


void times_table(void)
{
        int i, j, result;

        for (i = 0 ; i <= 9; i++)
        {
        _putchar(48);
        for (j = 1; j <= 9; j++)
        {
        result = i * j;
        _putchar(44);
        _putchar(32);
        if (result <= 9)
        {
                _putchar(32);
                _putchar(result + 48);
        }
        else
        {
                _putchar((result / 10) + 48);
                _putchar((result % 10) + 48);
        }
        }
        _putchar('\n');
        }
}
```
#### 10. a + b
 function that adds two integers and returns the result.

- Prototype: int add(int, int);

```
#include "main.h"

/**
  * add - Adds two values
  * @num1: The first number to be computed
  * @num2: The second number to be computed
  *
  * Return: Integer value
  */

int add(int num1, int num2)
{
        return (num1 + num2);
}

```

#### 11. 98 Battery Street, the OG

function that prints all natural numbers from n to 98, followed by a new line.

- Prototype: void print_to_98(int n);
- Numbers must be separated by a comma, followed by a space
- Numbers should be printed in order
- The first printed number should be the number passed to your function
- The last printed number should be 98
- You are allowed to use the standard library

```
#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d\n", i);
		}
	} else if (n >= 98)
	{
		for (j = n; j >= 98; j--)
		{
			if (j != 98)
				printf("%d, ", j);
			else if (j == 98)
				printf("%d\n", j);
		}
	}
}
```
#### 12. The World looks like a multiplication-table, or a mathematical equation, which, turn it how you will, balances itself

function that prints the n times table, starting with 0.

- Prototype: void print_times_table(int n);
- If n is greater than 15 or less than 0 the function should not print anything
- Format: see example
```
#include "main.h"

/**
 * print_times_table - Prints the n times table
 *
 * @n: number times table (0 < n <= 15)
 *
 * Return: no return
 */
void print_times_table(int n)
{
        int i, j, result;

        if (n >= 0 && n <= 15)
        {
                for (i = 0; i <= n; i++)
                {
                        _putchar(48);
                        for (j = 1; j <= n; j++)
                        {
                                result = i * j;
                                _putchar(44);
                                _putchar(32);
                                if (result <= 9)
                                {
                                        _putchar(32);
                                        _putchar(32);
                                        _putchar(result + 48);
                                }
                                else if (result <= 99)
                                {
                                        _putchar(32);
                                        _putchar((result / 10) + 48);
                                        _putchar((result % 10) + 48);
                                }
                                else
                                {
                                        _putchar(((result / 100) % 10) + 48);
                                        _putchar(((result / 10) % 10) + 48);
                                        _putchar((result % 10) + 48);
                                }
                        }
                        _putchar('\n');
                }
        }
}
```

#### 13. Nature made the natural numbers; All else is the work of women

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. Write a program that computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.

- You are allowed to use the standard library

```
#include <stdio.h>

/**
 * main - Lists all the natural numbers below 1024 (excluded)
 *        that are multiples of 3 or 5.
 *
 * Return: Always 0.
 */
int main(void)
{
        int i, sum = 0;

        for (i = 0; i < 1024; i++)
        {
                if ((i % 3) == 0 || (i % 5) == 0)
                        sum += i;
        }

        printf("%d\n", sum);

        return (0);
}
```
#### 14. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A.

program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.

- The numbers must be separated by comma, followed by a space , 
- You are allowed to use the standard library

```
#include <stdio.h>

/**
 *main - Prints the add of the Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
        int c;
        long int n1, n2, fn;

        n1 = 1;
        n2 = 2;
        printf("%ld, %ld", n1, n2);
        for (c = 0; c < 48; c++)
        {
                fn = n1 + n2;
                printf(", %ld", fn);
                n1 = n2;
                n2 = fn;
        }
        printf("\n");
        return (0);
}

```
#### 15. Even Liber Abbaci

Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89. By considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000, write a program that finds and prints the sum of the even-valued terms, followed by a new line.

- You are allowed to use the standard library

```
#include <stdio.h>

/**
 * main - Prints the add of the even-valued
 * fibonacci numbers.
 *
 * Return: Always 0. */int main(void)
{
        long int n1, n2, fn, afn;

        n1 = 1;
        n2 = 2;
        fn = afn = 0;
        while (fn <= 4000000)
        {
                fn = n1 + n2;
                n1 = n2;
                n2 = fn;
                if ((n1 % 2) == 0)
                {
                        afn += n1;
                }
        }
        printf("%ld\n", afn);
        return (0);
}
```
#### 16. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A+
 program that finds and prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.

The numbers should be separated by comma, followed by a space ,
- You are allowed to use the standard library
- You are not allowed to use any other library (You can’t use GMP etc…)
- You are not allowed to use long long, malloc, pointers, arrays/tables, or structures
- You are not allowed to hard code any Fibonacci number (except for 1 and 2)

```
#include <stdio.h>

/**
 *  main - Prints the first 98 Fibonacci numbers
 *
 *  Return: Always 0.
 */
int main(void)
{
	int c, boolean, boolean2;
	long int n1, n2, fn, fn2, n11, n22;

	n1 = 1;
	n2 = 2;
	boolean =  boolean2 = 1;
	printf("%ld, %ld", n1, n2);
	for (c = 0; c < 96; c++)
	{
		if (boolean)
		{
			fn = n1 + n2;
			printf(", %ld", fn);
			n1 = n2;
			n2 = fn;
		}
		else
		{
			if (boolean2)
			{
				n11 = n1 % 1000000000;
				n22 = n2 % 1000000000;
				n1 = n1 / 1000000000;
				n2 = n2 / 1000000000;
				boolean2 = 0;
			}
			fn2 = (n11 + n22);
			fn = n1 + n2 + (fn2 / 1000000000);
			printf(", %ld", fn);
			printf("%ld", fn2 % 1000000000);
			n1 = n2;
			n11 = n22;
			n2 = fn;
			n22 = (fn2 % 1000000000);
		}
		if (((n1 + n2) < 0) && boolean == 1)
			boolean = 0;
	}
	printf("\n");
	return (0);
}
```
