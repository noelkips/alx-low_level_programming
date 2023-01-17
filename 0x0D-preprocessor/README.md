C - Preprocessor

The projects in this repository and the added resources covers the following
. What are macros and how to use them
. What are the most common predefined macros
. How to include guard your header files

Resources
.[understanding C program Compilation Process](https://intranet.alxswe.com/rltoken/X0ithSsqlz_D0c8V8uA1HQ)
.[Object-like Macros](https://intranet.alxswe.com/rltoken/kaqIw352MSJ8xoi1xU09ZA)
.[Macro Arguments](https://intranet.alxswe.com/rltoken/wcQZzunlgjepxExZFc2ORQ)
.[Pre Processor Directives in C](https://intranet.alxswe.com/rltoken/S4zfCHzg82fUAxdt8_SaZQ)
.[The C Preprocessor](https://intranet.alxswe.com/rltoken/G33GiOIZofiIN4Tx9_acbQ)
.[Standard Predefined Macros](https://intranet.alxswe.com/rltoken/0OYhpL2cJfsIMBWhTuZsAA)
.[include guard](https://intranet.alxswe.com/rltoken/oF2vgIZNePdU965jCEZLHA)
.[Common Predefined Macros](https://intranet.alxswe.com/rltoken/ROl5xAMKX-JpenEqmf7FnQ)

Requirements
1. Allowed editors: vi, vim, emacs
2. All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
3. All your files should end with a new line
4. A README.md file, at the root of the folder of the project is mandatory
5. Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
6. You are not allowed to use global variables
7. No more than 5 functions per file
8. The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
9. You are allowed to use _putchar
10. You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
11. In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
12. Don’t forget to push your header file
13. All your header files should be include guarded


Tasks
Tasks
[0. Object-like Macro](./0-object_like_macro.h)
Create a header file that defines a macro named SIZE as an abbreviation for the token 1024.
[1. Pi](./1-pi.h)
Create a header file that defines a macro named PI as an abbreviation for the token 3.14159265359.
[2. File name](./2-main.c)
Write a program that prints the name of the file it was compiled from, followed by a new line.
	You are allowed to use the standard library

[3. Function-like macro](./3-function_like_macro.h)
Write a function-like macro ABS(x) that computes the absolute value of a number x.

[4. SUM](./4-sum.h)
Write a function-like macro SUM(x, y) that computes the sum of the numbers x and y.
