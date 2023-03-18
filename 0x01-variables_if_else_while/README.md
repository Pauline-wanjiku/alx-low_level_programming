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
#### 2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game

**2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game**
- You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
- All your code should be in the main function
- You can only use putchar twice in your code
```
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* betty style doc for function main goes there */
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
        char ch;

        for(ch = 'a' ; ch <= 'z' ; ch++) 
     
        putchar(ch);
        putchar('/n);

     
        return(0)

}
```
#### 3. alphABET
**program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.**

- You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
- All your code should be in the main function
- You can only use putchar three times in your code

```
#include <stdio.h>

/**
 *main - program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 *Return: Always 0 (Success)
 */

int main(void)
{
        char alphabet;

        for (alphabet = 'a' ; alphabet <= 'z'; alphabet++)
                putchar (alphabet);

        for (alphabet = 'A' ; alphabet <= 'Z'; alphabet++)
                putchar (alphabet);
putchar ('\n');

        return (0);
}
```

#### 4. When I was having that alphabet soup, I never thought that it would pay off
**program that prints the alphabet in lowercase, followed by a new line.**

- Print all the letters except q and e
- You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
- All your code should be in the main function
- You can only use putchar twice in your code

```

/*
 *main -prints the alphabet in lowercase, followed by a new line.
 *Return: Always 0 (Success)
 */

int main(void)
{
        char letter;

        for (letter = 'a' ; letter < 'z' ; letter++)
        {
                if (letter != 'e' && letter != 'q')
                        putchar(letter);
        }

        putchar ('\n');
        return (0);
}
```
#### 5. Numbers

**program that prints all single digit numbers of base 10 starting from 0, followed by a new line.**

- All your code should be in the main function.
```
#include<stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
        int num;

        for (num = 0 ; num < 10 ; num++)
                printf("%d", num);
        printf("\n");

        return (0);
}
```
#### 6. Numberz
**program that prints all single digit numbers of base 10 starting from 0, followed by a new line.**

- You are not allowed to use any variable of type char
- You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
- You can only use putchar twice in your code
- All your code should be in the main function

```
#include <stdio.h>

/**
 *main - Prints all single digit numbers of base 10 starting 0.
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
        int numbers;

        for (numbers = 0 ; numbers < 10 ; numbers++)
                putchar (numbers + '0');
        putchar ('\n');
        return (0);
}
```

#include <stdio.h>

/**
 *main -  prints the lowercase alphabet in reverse, followed by a new line.
 *Return: Always 0 (Success)
 */
int main(void)
{
        char alphas;

        for (alphas = 'z' ; alphas >= 'a' ; alphas--)
                putchar (alphas);
        putchar ('\n');

        return (0);
}
```
### 8. Hexadecimal

**Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.**

- You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
- All your code should be in the main function
- You can only use putchar three times in your code
```
#include<stdio.h>
/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
        int num;
        char letter;

        for (num = 0; num < 10; num++)
                putchar((num % 10) + '0');

        for (letter = 'a'; letter <= 'f'; letter++)
                putchar(letter);

        putchar('\n');

        return (0);
}
```

#### 9. Patience, persistence and perspiration make an unbeatable combination for success.
**program that prints all possible combinations of single-digit numbers.**

- Numbers must be separated by ,, followed by a space
- Numbers should be printed in ascending order
- You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
- All your code should be in the main function
- You can only use putchar four times maximum in your code
- You are not allowed to use any variable of type char
```
#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
        int num;

        for (num = 0; num <= 9; num++)
        {
                putchar((num % 10) + '0');
                if (num == 9)
                        continue;
                putchar(',');
                putchar(' ');
        }

        putchar('\n');

        return (0);
}
```
#### 10. Inventing is a combination of brains and materials. The more brains you use, the less material you need.
**program that prints all possible different combinations of two digits.**

- Numbers must be separated by ,, followed by a space
- The two digits must be different
- 01 and 10 are considered the same combination of the two digits 0 and 1
- Print only the smallest combination of two digits
- Numbers should be printed in ascending order, with two digits
- You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
- You can only use putchar five times maximum in your code
- You are not allowed to use any variable of type char
- All your code should be in the main function

```
#include <stdio.h>

/**
 * main - Prints the numbers from 00 to 99, numbers separated by
 *        a comma followed by a space, in ascending order.
 *
 * Return: Always 0.
 */
int main(void)
{
        int digit1, digit2;

       for (digit1 = 0; digit1 < 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit1 == 8 && digit2 == 9)
				continue;
			
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
```

#### 11. The success combination in business is: Do what you do better... and: do more of what you do...
**program that prints all possible different combinations of three digits.**

- Numbers must be separated by ,, followed by a space
- The three digits must be different
- 012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1 and 2
- Print only the smallest combination of three digits
- Numbers should be printed in ascending order, with three digits
- You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
- You can only use putchar six times maximum in your code
- You are not allowed to use any variable of type char
- All your code should be in the main function
```
#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = 0; digit1 < 8; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 9; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 < 10; digit3++)
			{
				putchar((digit1 % 10) + '0');
				putchar((digit2 % 10) + '0');
				putchar((digit3 % 10) + '0');

				if (digit1 == 7 && digit2 == 8 && digit3 == 9)
					continue;
				
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
```
