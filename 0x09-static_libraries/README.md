C - Static libraries

more resources for this project
[C static libraries](https://intranet.alxswe.com/concepts/61)
[What Is A “C” Library? What Is It Good For?](https://intranet.alxswe.com/rltoken/XB1iH0qE6gshx0x8TfRAPQ)
[Creating A Static “C” Library Using “ar” and “ranlib”](https://intranet.alxswe.com/rltoken/XB1iH0qE6gshx0x8TfRAPQ)
[Using A “C” Library In A Program](https://intranet.alxswe.com/rltoken/XB1iH0qE6gshx0x8TfRAPQ)
[What is difference between Dynamic and Static library(Static and Dynamic linking)](https://intranet.alxswe.com/rltoken/PexOGO-npR_ZDQk-SpOR9g)

The projects on this repository and resources above covers the following
1. What is a static library, how does it work, how to create one, and how to use it
2. Basic usage of ar, ranlib, nm

Requirements
C

1. Allowed editors: vi, vim, emacs
2. All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
3. All your files should end with a new line
4. A README.md file, at the root of the folder of the project is mandatory
5. Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
6. You are not allowed to use global variables
7. No more than 5 functions per file
8. You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
You are allowed to use _putchar
9. You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
10. In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples (main.c files and _putchar.c is in test_files directory)
11. The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
12. Don’t forget to push your header file

Bash
1. Allowed editors: vi, vim, emacs
2. All your scripts will be tested on Ubuntu 20.04 LTS
3. All your files should end with a new line
4. The first line of all your files should be exactly #!/bin/bash
5. A README.md file, at the root of the folder of the project, describing what each script is doing
6. All your files must be executable

[0. A library is not a luxury but one of the necessities of life](./libmy.a)
Create the static library libmy.a containing all the functions listed below:

int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

[1. Without libraries what have we? We have no past and no future](./create_static_lib.sh)
Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.
