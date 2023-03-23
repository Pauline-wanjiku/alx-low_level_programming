# 0x04. C - More functions, more nested loops

## Learning Objectives

- What are nested loops and how to use them
- What is a function and how do you use functions
- What is the difference between a declaration and a definition of a function
- What is a prototype
- Scope of variables
- What are the gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89
- What are header files and how to to use them with #include

### Tasks

#### 0. isupper
function that checks for uppercase character.

- Prototype: int _isupper(int c);
- Returns 1 if c is uppercase
- Returns 0 otherwise
- *The standard library provides a similar function: isupper. Run man isupper to learn more.*

```
#include "main.h"
#include <stdio.h>

/**
 * _isupper- checks for uppercase character.
 * @c : the character being checked 
 *
 * Return: Always 0.
 */

int _isupper(int c)
{
        if ((c >= 'A' && c <= 'Z'))
        {
                return (1);
        }
        return (0);
} 
```

#### 1. isdigit

function that checks for a digit (0 through 9).

- Prototype: int _isdigit(int c);
- Returns 1 if c is a digit
- Returns 0 otherwise
- The standard library provides a similar function: isdigit. Run man isdigit to learn more.

```
#include "main.h"
#include <stdio.h>

/**
 *_isdigit-checks for a digit(0 through 9).
 * @c:the character being checked
 *
 * Return:1-successful.
 */

int _isdigit(int c)
{
        if (c >= '0' && c <= '9')
        {
                return (1);
        }
        return (0);
}
```
