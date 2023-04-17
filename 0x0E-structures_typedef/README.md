# 0x0E. C - Structures, typedef

## Learning Objectives
- What are structures, when, why and how to use them
- How to use typedef

### TASKS
#### 0. Poppy
- Define a new type struct dog with the following elements:

- name, type = char *
- age, type = float
- owner, type = char 


[solution](/0x0E-structures_typedef/dog.h)

#### 1. A dog is the only thing on earth that loves you more than you love yourself
function that initialize a variable of type struct dog

- Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

[solution](/0x0E-structures_typedef/1-init_dog.c)

#### 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
function that prints a struct dog

- Prototype: void print_dog(struct dog *d);
- You are allowed to use the standard library
- If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
- If d is NULL print nothing.

[solution](/0x0E-structures_typedef/2-print_dog.c)

