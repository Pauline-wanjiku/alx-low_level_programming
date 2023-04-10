# 0x0A. C - argc, argv

## Learning Objectives
- How to use arguments passed to your program
- What are two prototypes of main that you know of, and in which case do you use one or the other
- How to use __attribute__((unused)) or (void) to compile functions with unused variables or parameters.

### Tasks

#### 0. It ain't what they call you, it's what you answer to
 program that prints its name, followed by a new line.

- If you rename the program, it will print the new name, without having to compile it again
- Should not remove the path before the name of the program

[solution](0x0A-argc_argv/0-whatsmyname.c)

#### 1. Silence is argument carried out by other means
program that prints the number of arguments passed into it.

- Program should print a number, followed by a new line

[solution](0x0A-argc_argv/1-args.c)

#### 2. The best argument against democracy is a five-minute conversation with the average voter

program that prints all arguments it receives.

- All arguments should be printed, including the first one
- Only print one argument per line, ending with a new line

[solution](0x0A-argc_argv/2-args.c)

#### 3. Neither irony nor sarcasm is argument
program that multiplies two numbers.

- Your program should print the result of the multiplication, followed by a new line
- You can assume that the two numbers and result of the multiplication can be stored in an integer
- If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1

[solution](0x0A-argc_argv/3-mul.c)

#### 4. To infinity and beyond
program that adds positive numbers.

- Print the result, followed by a new line
- If no number is passed to the program, print 0, followed by a new line
- If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
- You can assume that numbers and the addition of all the numbers can be stored in an int

[solution](/0x0A-argc_argv/4-add.c)

#### 5. Minimal Number of Coins for Change
program that prints the minimum number of coins to make change for an amount of money.

- Usage: ./change cents
- where cents is the amount of cents you need to give back
- if the number of arguments passed to your program is not exactly 1, print Error, followed by a new line, and return 1
- you should use atoi to parse the parameter passed to your program
- If the number passed as the argument is negative, print 0, followed by a new line
- You can use an unlimited number of coins of values 25, 10, 5, 2, and 1cent

[solution](/0x0A-argc_argv/100-change.c)
