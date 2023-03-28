# 0x05. C - Pointers, arrays and strings

## Learning Objectives
- What are pointers and how to use them
- What are arrays and how to use them
- What are the differences between pointers and arrays
- How to use strings and how to manipulate them
- Scope of variables

### Tasks
#### 0. 98 Battery st.
Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.

- Prototype: void reset_to_98(int *n);
```
#include "main.h"
#include <stdio.h>

/**
 *reset_to_98 - takes a pointer to an int as parameter,update value to 98
 *@n:value to be updated
 * Return: Always 0. 
 */

void reset_to_98(int *n)
{
        *n = 98;
}
```
#### 1. Don't swap horses in crossing a stream
Write a function that swaps the values of two integers.

- Prototype: void swap_int(int *a, int *b);
```
#include "main.h"
#include <stdio.h>

/**
 *swap_int - swaps the values of two integers.
 *@a:value to be swaped
 * @b :value to be swaped with a
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
        int temp;

        temp = *a;
        *a = *b;
        *b = temp;
}
```

#### 2. This report, by its very length, defends itself against the risk of being read
Write a function that returns the length of a string.

- Prototype: int _strlen(char *s);

```
#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strlen -returns the length of a string.
 *@s: the string to check length
 * Return: Always 0.
 */

int _strlen(char *s)
{
        int i;

        for (i = 0; s[i]!='\0'; i++);
        return (i);
}
```
#### 3. I do not fear computers. I fear the lack of them
function that prints a string, followed by a new line, to stdout.

- Prototype: void _puts(char *str);

```
#include "main.h"
#include <stdio.h>

/**
 * _puts -  prints a string
 *@str:pointer
 * Return: Always 0.
 */

void _puts(char *str)
{
         puts(str);
}
```

#### 4. I can only go one way. I've not got a reverse gear
function that prints a string, in reverse, followed by a new line.
- Prototype: void print_rev(char *s);
```
#include <stdio.h>
#include "main.h"

/**
 *print_rev - prints s reverse of a string
 *@s: string to be reversed
 * Return: Always 0.
 */

void print_rev(char *s)
{
        int i;

        for (i = 0; s[i] != '\0'; i++);
        ;
        for (i = i - 1; s[i] != '\0'; i--)
        {
                _putchar(s[i]);
        }
        _putchar('\n');
}

```

#### 5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes.

function that reverses a string.

- Prototype: void rev_string(char *s);

```

```

#### 6. Half the lies they tell about me aren't true

function that prints every other character of a string, starting with the first character, followed by a new line.

- Prototype: void puts2(char *str);

```

```

#### 7. Winning is only half of it. Having fun is the other half

function that prints half of a string, followed by a new line.

- Prototype: void puts_half(char *str);
- The function should print the second half of the string
- If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2

```

```

#### 8. Arrays are not pointers
 function that prints n elements of an array of integers, followed by a new line.

- Prototype: void print_array(int *a, int n);
- where n is the number of elements of the array to be printed
- Numbers must be separated by comma, followed by a space
- The numbers should be displayed in the same order as they are stored in the array
- You are allowed to use printf

```


```

#### 9. strcpy
function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.

- Return value: the pointer to dest

- Prototype: char *_strcpy(char *dest, char *src);

```

```
