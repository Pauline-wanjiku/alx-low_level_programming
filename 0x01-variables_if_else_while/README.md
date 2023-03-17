## 0x01. C - Variables, if, else, while
### Tasks
**0. Positive anything is better than negative nothing**
- You can find the source code here
- The variable n will store a different value every time you will run this program
- You don’t have to understand what rand, srand, RAND_MAX do. Please do not touch this code
- The output of the program should be:
- The number, followed by
* if the number is greater than 0: is positive
* if the number is 0: is zero
* if the number is less than 0: is negative
* followed by a new line
```
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else
printf("%d is negative\n", n);
return (0);
}
```
# 1. The last digit
**This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n.**

- You can find the source code here
- The variable n will store a different value every time you run this program
- You don’t have to understand what rand, srand, and RAND_MAX do. Please do not touch this code
- The output of the program should be:
- The string Last digit of, followed by n, followed by the string is, followed by
 * if the last digit of n is greater than 5: the string and is greater than 5
 * if the last digit of n is 0: the string and is 0
 * if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0
 *  followed by a new line

```
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
        int n, last_digit;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        last_digit = n % 10;
if (last_digit > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
if (last_digit == 0)
printf("Last digit of %d is %d and is 0\n", n, last_digit);
if ((last_digit < 6 ) && (last_digit != 0))
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
return (0);
}
```
