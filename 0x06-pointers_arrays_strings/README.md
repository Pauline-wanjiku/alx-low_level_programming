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

#### 3. strcmp
 function that compares two strings.

- Prototype: int _strcmp(char *s1, char *s2);
- Your function should work exactly like strcmp

[solution](/0x06-pointers_arrays_strings/3-strcmp.c)

#### 4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy
 function that reverses the content of an array of integers.

- Prototype: void reverse_array(int *a, int n);
- Where n is the number of elements of the array

[solution](/0x06-pointers_arrays_strings/4-rev_array.c)

#### 5. Always look up
function that changes all lowercase letters of a string to uppercase.

- Prototype: char *string_toupper(char *);
[solution](/0x06-pointers_arrays_strings/5-string_toupper.c)

