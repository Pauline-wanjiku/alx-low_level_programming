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
        if (c >= 'a' && c <= 22)
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
```
