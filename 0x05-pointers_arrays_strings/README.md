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
