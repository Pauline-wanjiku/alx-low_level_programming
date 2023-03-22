# 0x02. C - Functions, nested loops
 The tasks covered the following:

- What are nested loops and how to use them
- What is a function and how do you use functions
- What is the difference between a declaration and a definition of a function
- What is a prototype
- Scope of variables
- What are the gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89
- What are header files and how to to use them with #include

-**The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h*

### TASKS
#### 0_putchar
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
