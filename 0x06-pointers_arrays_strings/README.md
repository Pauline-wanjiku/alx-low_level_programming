# 0x06. C - More pointers, arrays and strings

## Learning Objectives
- What are pointers and how to use them
- What are arrays and how to use them
- What are the differences between pointers and arrays
- How to use strings and how to manipulate them
- Scope of variables 

### TASKS

#### 0. strcat
 a function that concatenates two strings.

- Prototype: char *_strcat(char *dest, char *src);
- This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
- Returns a pointer to the resulting string dest
 
[solution](/0x06-pointers_arrays_strings/0-strcat.c)

#### 1. strncat

function that concatenates two strings.

Prototype: char *_strncat(char *dest, char *src, int n);
- The _strncat function is similar to the _strcat function, except that
it will use at most n bytes from src; and
- src does not need to be null-terminated if it contains n or more bytes
- Return a pointer to the resulting string dest
function that concatenates two strings.

[solution](/0x06-pointers_arrays_strings/1-strncat.c)

#### 2. strncpy

function that copies a string.

- Prototype: char *_strncpy(char *dest, char *src, int n);
- Your function should work exactly like strncpy

[solution](/0x06-pointers_arrays_strings/2-strncpy.c)
