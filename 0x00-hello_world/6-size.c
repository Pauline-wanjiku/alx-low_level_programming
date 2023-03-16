#include <stdio.h>

int main(void)
{ int intType; long int longInt; long long int longlIntype; char charType; float floatType;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(intType));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(longInt));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(longlIntype));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(charType));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(floatType));
return (0);
} 
