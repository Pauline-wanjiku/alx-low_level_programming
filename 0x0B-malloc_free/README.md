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

#### 2. He who is not courageous enough to take risks will accomplish nothing in life
function that concatenates two strings.

- Prototype: char *str_concat(char *s1, char *s2);
- The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
- if NULL is passed, treat it as an empty string
- The function should return NULL on failure

[solution](/0x0B-malloc_free/2-str_concat.c)

#### 3. If you even dream of beating me you'd better wake up and apologize
 function that returns a pointer to a 2 dimensional array of integers.

- Prototype: int **alloc_grid(int width, int height);
- Each element of the grid should be initialized to 0
- The function should return NULL on failure
- If width or height is 0 or negative, return NULL

[solution](/0x0B-malloc_free/3-alloc_grid.c)

