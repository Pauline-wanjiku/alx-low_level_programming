#include <stdio.h>

int main(void)
{ int intType; long int longInt; long long int longlIntype; char charType; float floatType;

printf("Size of a char: %zu byte(s)\n",sizeof(intType));
printf("Size of an int: %zu byte(s)\n", sizeof(longInt));
printf("Size of a long int: %zu byte(s)\n",sizeof(longlIntype));
printf("Size of a long long int: %zu byte(s)\n",sizeof(charType));
printf("Size of a float: %zu byte(s)\n",sizeof(floatType));
return (0);
} 
