# 0x07. C - Even more pointers, arrays and strings

## Learning Objectives
- What are pointers to pointers and how to use them
- What are multidimensional arrays and how to use them
- What are the most common C standard library functions to manipulate strings

### Tasks
#### 0. memset
 function that fills memory with a constant byte.

- Prototype: char *_memset(char *s, char b, unsigned int n);
- The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
- Returns a pointer to the memory area s
FYI: The standard library provides a similar function: memset. Run man memset to learn more.

[solution](/0x07. C - Even more pointers, arrays and strings/0-memset.c)

#### 1. memcpy
function that copies memory area.

- Prototype: char *_memcpy(char *dest, char *src, unsigned int n);
- The _memcpy() function copies n bytes from memory area src to memory area dest
- Returns a pointer to dest

[solution](/0x07. C - Even more pointers, arrays and strings/1-memcpy.c)

#### 2-strchr.c
function that locates a character in a string.

- Prototype: char *_strchr(char *s, char c);
- Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
- The standard library provides a similar function: strchr. Run man strchr to learn more.

[solution](/0x07. C - Even more pointers, arrays and strings/2-strchr.c)

#### 3. strspn

 function that gets the length of a prefix substring.

- Prototype: unsigned int _strspn(char *s, char *accept);
- Returns the number of bytes in the initial segment of s which consist only of bytes from accept

[solution](/0x07. C - Even more pointers, arrays and strings/3-strspn.c)

#### 4. strpbrk
function that searches a string for any of a set of bytes.

- Prototype: char *_strpbrk(char *s, char *accept);
- The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept
- Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found

[solution](/0x07. C - Even more pointers, arrays and strings/4-strpbrk.c)



