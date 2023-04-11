# 0x0B. C - malloc, free

## Learning Objectives
- What is the difference between automatic and dynamic allocation
- What is malloc and free and how to use them
- Why and when use malloc
- How to use valgrind to check for memory leak

[solution](/0x0B-malloc_free/0-create_array.c)

#### 1. The woman who has no imagination has no wings

function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

- Prototype: char *_strdup(char *str);
- The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
- Returns NULL if str = NULL
- On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available

[solution](/0x0B-malloc_free/1-strdup.c)

