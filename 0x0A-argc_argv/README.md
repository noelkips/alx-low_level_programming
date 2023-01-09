C - argc, argv

Resources
[Arguments to main](https://intranet.alxswe.com/rltoken/Jip_nI4tv2ybQZ-jV3fqJg)
[argc and argv](https://intranet.alxswe.com/rltoken/31aLwv8qsXuiUZrOk9Djqg)
[What does argc and argv mean?](https://intranet.alxswe.com/rltoken/A0pzqslB6Z3Y3OV3hJQ6Tw)
[how to compile with unused variables](https://intranet.alxswe.com/rltoken/MkOUE1ndq1UAx9Erk-AVbg)

The project files and resources provided for this repository covers the following concepts
1. How to use arguments passed to your program
2. What are two prototypes of main that you know of, and in which case do you use one or the other
3. How to use __attribute__((unused)) or (void) to compile functions with unused variables or parameters

Requirements
General
1. Allowed editors: vi, vim, emacs
2. All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
3. All your files should end with a new line
4. A README.md file, at the root of the folder of the project is mandatory
5. Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
6. You are not allowed to use global variables
7. No more than 5 functions per file
8. The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
9. Don’t forget to push your header file
10. You are allowed to use the standard library

Tasks
[0. It ain't what they call you, it's what you answer to](./1-args.c)
Write a program that prints its name, followed by a new line.

i. If you rename the program, it will print the new name, without having to compile it again
ii. You should not remove the path before the name of the program

[1. Silence is argument carried out by other means](./1-args.c)
. Write a program that prints the number of arguments passed into it.

. Your program should print a number, followed by a new line

[2. The best argument against democracy is a five-minute conversation with the average voter](./2-args.c)
Write a program that prints all arguments it receives.

. All arguments should be printed, including the first one
. Only print one argument per line, ending with a new line

[3. Neither irony nor sarcasm is argument](./3-mul.c)
Write a program that multiplies two numbers.

	. Your program should print the result of the multiplication, followed by a new line
	. You can assume that the two numbers and result of the multiplication can be stored in an integer
	. If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1

[4. To infinity and beyond](./4-add.c)
Write a program that adds positive numbers.

	. Print the result, followed by a new line
	. If no number is passed to the program, print 0, followed by a new line
	. If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
	. You can assume that numbers and the addition of all the numbers can be stored in an int

[5. Minimal Number of Coins for Change](./100-change.c)
Write a program that prints the minimum number of coins to make change for an amount of money.

	. Usage: ./change cents
	. where cents is the amount of cents you need to give back
	. if the number of arguments passed to your program is not exactly 1, print Error, followed by a new line, and return 1
	. you should use atoi to parse the parameter passed to your program
	. If the number passed as the argument is negative, print 0, followed by a new line
	. You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
