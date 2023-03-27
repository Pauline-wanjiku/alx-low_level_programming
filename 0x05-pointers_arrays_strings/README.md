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
