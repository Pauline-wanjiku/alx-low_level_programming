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
