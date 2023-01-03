More on pointers, arrays and strings

General objectives
The projects in this repostory and the resources added cover the following
1. What pointers are and how to use them
2. What multidimensional arrays are  and how to use them
3. What are the most common C standard library functions to manipulate strings

Requirements
1. Allowed editors: vi, vim, emacs
2. All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
3. All your files should end with a new line
4. A README.md file, at the root of the folder of the project is mandatory
5. Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
6. You are not allowed to use global variables
7. No more than 5 functions per file
8. You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
9. You are allowed to use _putchar
10. You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
11. In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
12. The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
13. Don’t forget to push your header file


More resources on the projects in this repository
1. [Pointer to pointer](https://alx-intranet.hbtn.io/rltoken/eyikXPg7ZxCAEuWklB6xtQ)
2. [Pointer to Pointer with example](https://alx-intranet.hbtn.io/rltoken/ojr7OUUm2I-MULE4lWlrkg)
3. [Multi-dimensional Arrays in C](https://alx-intranet.hbtn.io/rltoken/HUZIJ6t55KM7d7FBCwWm8Q)
4. [Two dimensional (2D) arrays in C programming with example](https://alx-intranet.hbtn.io/rltoken/Dx9nIBRj68sRBGe2NRI_aQ)

Tasks 
[0. memset](../0-memset.c)
Write a function that fills memory with a constant byte.

	Prototype: char *_memset(char *s, char b, unsigned int n);
        The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
	Returns a pointer to the memory area s

[1.memcpy](../1-memcpy.c)
Write a function that copies memory area.

	Prototype: char *_memcpy(char *dest, char *src, unsigned int n);
	The _memcpy() function copies n bytes from memory area src to memory area dest
	Returns a pointer to dest

[2. strchr](../2-strchr.c)
Write a function that locates a character in a string.

	Prototype: char *_strchr(char *s, char c);
	Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found

[3. strspn](../3-strspn.c)
Write a function that gets the length of a prefix substring.

	Prototype: unsigned int _strspn(char *s, char *accept);
	Returns the number of bytes in the initial segment of s which consist only of bytes from accept

[4. strpbrk](../4-strpbrk.c)
Write a function that searches a string for any of a set of bytes.

	Prototype: char *_strpbrk(char *s, char *accept);
	The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept
	Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found

[5.strsr](../5-strstr.c)
Write a function that locates a substring.

	Prototype: char *_strstr(char *haystack, char *needle);
	The _strstr() function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared
	Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.

[6. Chess is mental torture](../7-print_chessboard.c)
Write a function that prints the chessboard.

	Prototype: void print_chessboard(char (*a)[8]);

[7. The line of life is a ragged diagonal between duty and desire](../8-print_diagsums.c)
Write a function that prints the sum of the two diagonals of a square matrix of integers.

	Prototype: void print_diagsums(int *a, int size);
	Format: see example
	You are allowed to use the standard library

[8. Double pointer, double fun](../100-set_string.c)
Write a function that sets the value of a pointer to a char.

	Prototype: void set_string(char **s, char *to);

[9. My primary goal of hacking was the intellectual curiosity, the seduction of adventure](../101-crackme_password)
Create a file that contains the password for the crackme2 executable.

	Your file should contain the exact password, no new line, no extra space
	ltrace, ldd, gdb and objdump can help
	You may need to install the openssl library to run the crakme2 program: sudo apt install libssl-dev	
	Edit the source list sudo nano /etc/apt/sources.list to add the following line: deb http://security.ubuntu.com/ubuntu xenial-security main Then sudo apt update and sudo apt install libssl1.0.0
