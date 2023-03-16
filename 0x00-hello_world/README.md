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
 **script that compiles a C file but does not link.
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
