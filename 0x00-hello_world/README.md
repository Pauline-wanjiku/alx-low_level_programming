# 0x00. C - Hello, World
### Tasks
#### 0. Preprocessor
**script that runs a C file through the preprocessor and save the result into another file.**
- The C file name will be saved in the variable $CFILE
- The output should be saved in the file c
```
#!/bin/bash
gcc -E $CFILE -o c
```

#### 1. Compiler
 **script that compiles a C file but does not link.**
- The C file name will be saved in the variable $CFILE
- The output file should be named the same as the C file, but with the extension .o instead of .c.
- Example: if the C file is main.c, the output file should be main.o
```
#!/bin/bash
gcc -c $CFILE 
```

#### 2. Assembler
**script that generates the assembly code of a C code and save it in an output file.**

- The C file name will be saved in the variable $CFILE
- The output file should be named the same as the C file, but with the extension .s instead of .c.
- Example: if the C file is main.c, the output file should be main.s
```
#!/bin/bash
gcc -S $CFILE
```

#### 3. Name

** script that compiles a C file and creates an executable named cisfun.**

- The C file name will be saved in the variable $CFILE
```
#!/bin/bash
gcc $CFILE -o cisfun
```
#include <stdio.h>
int main()
{
        char myString[] = "Programming is like building a multilingual puzzle";
        puts(myString);
        return 0;


}
```
#### 4. Hello, puts
**C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.**

- Use the function puts
- You are not allowed to use printf
- Your program should end with the value 0
```
#include <stdio.h>
/**
 * main - Entry point
 * puts-write a line or string
 *
 * Return: returns an non-negative integer number for successful execution.
 */
int main(void)
{
puts("\"Programming is like building a multilingual puzzle");
return (0);
}
```

#### 5. Hello, printf
**Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.**

- Use the function printf
- You are not allowed to use the function puts
- Your program should return 0
- Your program should compile without warning when using the -Wall gcc option
```
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{printf("with proper grammar, but the outcome is a piece of art,\n");
return (0);
}
```
