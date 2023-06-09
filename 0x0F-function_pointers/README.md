# 0x0F. C - Function pointers

## Learning Objectives
- What are function pointers and how to use them
- What does a function pointer exactly hold
- Where does a function pointer point to in the virtual memory

### Tasks

#### 0. What's my name
function that prints a name.

- Prototype: void print_name(char *name, void (*f)(char *));

[solution](/0x0F-function_pointers/0-print_name.c)

#### 1. If you spend too much time thinking about a thing, you'll never get it done

 function that executes a function given as a parameter on each element of an array.

- Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
- where size is the size of the array
- action is a pointer to the function you need to use

[solution](/0x0F-function_pointers/1-array_iterator.c)

#### 2. To hell with circumstances; I create opportunities
 function that searches for an integer.

- Prototype: int int_index(int *array, int size, int (*cmp)(int));
- where size is the number of elements in the array array
- cmp is a pointer to the function to be used to compare values
- int_index returns the index of the first element for which the cmp function does not return 0
- If no element matches, return -1
- If size <= 0, return -1

[solution](/0x0F-function_pointers/2-int_index.c)

#### 3. A goal is not always meant to be reached, it often serves simply as something to aim at

#### 4. Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker

