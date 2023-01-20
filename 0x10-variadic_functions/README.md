 - Variadic functions

The project tasks, examples and the resources in this repository covers the following concepts:
	. What are variadic functions
	. How to use va_start, va_arg and va_end macros
	. Why and how to use the const type qualifier

Resources
[stdarg.h](https://intranet.alxswe.com/rltoken/wLRJdO8pA2-Vb-rF2Y71sA)
[Variadic Functions](https://intranet.alxswe.com/rltoken/3gW8GycmyjarbJR76FkrzA)
[Const Keyword](https://intranet.alxswe.com/rltoken/_RRPCY32VODyN_r2HIEnBQ)

Examples
1. prints all arguments - code from Wikipedia


vagrant@ubuntu-focal:~/0x10-variadic_functions$ cat example_1_print_args_wikipedia.c
#include <stdio.h>
#include <stdarg.h>

/* print all args one at a time until a negative argument is seen;
   all args are assumed to be of int type */
void printargs(int arg1, ...)
{
  va_list ap;
  int i;

  va_start(ap, arg1);
  for (i = arg1; i >= 0; i = va_arg(ap, int))
    printf("%d ", i);
  va_end(ap);
  putchar('\n');
}

int main(void)
{
   printargs(5, 2, 14, 84, 97, 15, -1, 48, -1);
   printargs(84, 51, -1, 3);
   printargs(-1);
   printargs(1, -1);
   return 0;
}
vagrant@ubuntu-focal:~/0x10-variadic_functions$

Ouput

vagrant@ubuntu-focal:~/0x10-variadic_functions$ gcc example_1_print_args_wikipedia.c  -o example_1
vagrant@ubuntu-focal:~/0x10-variadic_functions$ ./example_1
5 2 14 84 97 15
84 51

1
vagrant@ubuntu-focal:~/0x10-variadic_functions$


2. Add two numbers - code from geeks of geeks


vagrant@ubuntu-focal:~/0x10-variadic_functions$ cat example_2_add_number_geeks.c
// C program for the above approach

#include <stdarg.h>
#include <stdio.h>

// Variadic function to add numbers
int AddNumbers(int n, ...)
{
        int Sum = 0;

        // Declaring pointer to the
        // argument list
        va_list ptr;

        // Initializing argument to the
        // list pointer
        va_start(ptr, n);

        for (int i = 0; i < n; i++)

                // Accessing current variable
                // and pointing to next one
                Sum += va_arg(ptr, int);

        // Ending argument list traversal
        va_end(ptr);

        return Sum;
}

// Driver Code
int main()
{
        printf("\n\n Variadic functions: \n");

        // Variable number of arguments
        printf("\n 1 + 2 = %d ",
                AddNumbers(2, 1, 2));

        printf("\n 3 + 4 + 5 = %d ",
                AddNumbers(3, 3, 4, 5));

        printf("\n 6 + 7 + 8 + 9 = %d ",
                AddNumbers(4, 6, 7, 8, 9));

        printf("\n");

        return 0;
}

vagrant@ubuntu-focal:~/0x10-variadic_functions$


output

 gcc example_2_add_number_geeks.c -o example_2
vagrant@ubuntu-focal:~/0x10-variadic_functions$ ./example_2


 Variadic functions:

 1 + 2 = 3
 3 + 4 + 5 = 12
 6 + 7 + 8 + 9 = 30
vagrant@ubuntu-focal:~/0x10-variadic_functions$

3. Find the largest number - code fromgeeks of geeks


vagrant@ubuntu-focal:~/0x10-variadic_functions$ vagrant@ubuntu-focal:~/0x10-variadic_functions$ cat example_3_largest_number_geeks.c
#include <stdarg.h>
#include <stdio.h>

// Variadic function to find the largest number
int LargestNumber(int n, ...)
{
        // Declaring pointer to the
        // argument list
        va_list ptr;

        // Initializing argument to the
        // list pointer
        va_start(ptr, n);

        int max = va_arg(ptr, int);

        for (int i = 0; i < n-1; i++) {

                // Accessing current variable
                // and pointing to next
                int temp = va_arg(ptr, int);
                max = temp > max ? temp : max;
        }

        // End of argument list traversal
        va_end(ptr);

        return max;
}

// Driver Code
int main()
{
        printf("\n\n Variadic functions: \n");

        // Variable number of arguments
        printf("\n %d ",
                LargestNumber(2, 1, 2));

        printf("\n %d ",
                LargestNumber(3, 3, 4, 5));

        printf("\n %d ",
                LargestNumber(4, 6, 7, 8, 9));

        printf("\n");

        return 0;
}

vagrant@ubuntu-focal:~/0x10-variadic_functions$

Output

vagrant@ubuntu-focal:~/0x10-variadic_functions$ gcc example_3_largest_number_geeks.c -o example-3
vagrant@ubuntu-focal:~/0x10-variadic_functions$ ./example-3


 Variadic functions:

 2
 5
 9
vagrant@ubuntu-focal:~/0x10-variadic_functions$



##Task
Requirments
1. Allowed editors: vi, vim, emacs
2. All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
3. All your files should end with a new line
4. A README.md file, at the root of the folder of the project is mandatory
5. Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
6. You are not allowed to use global variables
7. No more than 5 functions per file
8. The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
9. You are allowed to use the following macros: va_start, va_arg and va_end
10. You are allowed to use _putchar
11. You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
12. In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
13. The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called variadic_functions.h
14. Don’t forget to push your header file
15. All your header files should be include guarded

Tasks
[0. Beauty is variable, ugliness is constant](./0-sum_them_all.c)
Write a function that returns the sum of all its parameters.
	Prototype: int sum_them_all(const unsigned int n, ...);
	If n == 0, return 0

[1. To be is to be the value of a variable](./1-print_numbers.c)
Write a function that prints numbers, followed by a new line.
	. Prototype: void print_numbers(const char *separator, const unsigned int n, ...);
	. where separator is the string to be printed between numbers
	. and n is the number of integers passed to the function
	. You are allowed to use printf
	. If separator is NULL, don’t print it
	. Print a new line at the end of your function


[2. One woman's constant is another woman's variable](./2-print_strings.c)
Write a function that prints strings, followed by a new line.

	. Prototype: void print_strings(const char *separator, const unsigned int n, ...);
	. where separator is the string to be printed between the strings
	. and n is the number of strings passed to the function
	. You are allowed to use printf
	. If separator is NULL, don’t print it
	. If one of the string is NULL, print (nil) instead
	. Print a new line at the end of your function

[3. To be is a to be the value of a variable](./3-print_all.c)
Write a function that prints anything.
	. Prototype: void print_all(const char * const format, ...);
	. where format is a list of types of arguments passed to the function
		@ c: char
		@ i: integer
		@ f: float
		@ s: char * (if the string is NULL, print (nil) instead
		@ any other char should be ignored
		@ see example
	. You are not allowed to use for, goto, ternary operator, else, do ... while
	. You can use a maximum of
		2 while loops
		2 if
	. You can declare a maximum of 9 variables
	. You are allowed to use printf
	. Print a new line at the end of your function
