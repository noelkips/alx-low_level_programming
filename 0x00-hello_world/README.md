# **0x00. C - Hello, World**


The project files and the resources in this directory covers the following concenpts and objectives<br>
> * C programming
> * Why C programming is awesome
> * Who invented C
> * Whond that piece of art is useful" - Dora Korpar, 2015-10-19
	vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$ echo $?
	1
	vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$ cat q
	and that piece of art is useful" - Dora Korpar, 2015-10-19
	vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$ grep printf < 101-quote.c
	vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$ grep put < 101-quote.c
	vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$

 are Dennis Ritchie, Brian Kernighan and Linus Torvalds
> * What happens when you type gcc main.c
> * What is an entry point
> * What is main
> * How to print text using printf, puts and putchar
> * How to get the size of a specific type using the unary operator sizeof
> * How to compile using gcc
> * What is the default program name when compiling with gcc
> * What is the official C coding style and how to check your code with betty-style
> * How to find the right header to include in your source code when using a standard library function
> * How does the main function influence the return value of the program


# **Resources**
1. [Everything you need to know to start with C.pdf (You do not have to learn everything in there yet, but make sure you read it entirely first)](https://intranet.alxswe.com/rltoken/P01aLj9BDfDUOv-y9x82Yw)
2. [Dennis Ritchie](https://intranet.alxswe.com/rltoken/YWFrRob_-Yo-_NQikMLI-g)
3. [“C” Programming Language: Brian Kernighan](https://intranet.alxswe.com/rltoken/W4oygfMgAp5Hyc7o6QuSYQ)
4. [Why C Programming Is Awesome](https://intranet.alxswe.com/rltoken/WYdE1novaWa0yt5fzGvLBw)
5. [Learning to program in C part 1](https://intranet.alxswe.com/rltoken/aE_pZLbexuLroHA0FmjLbw)
6. [Learning to program in C part 2](https://intranet.alxswe.com/rltoken/3a5y1N-0FlTaPbKRxlRLlQ)
7. [Understanding C program Compilation Process](https://intranet.alxswe.com/rltoken/idYJyVfQRZ9e5aljiT5UKg)
8. [Betty Coding Style](https://intranet.alxswe.com/rltoken/idYJyVfQRZ9e5aljiT5UKg)
9. [Hash-bang under the hood (Look at only after you finish consuming the other resources)](https://intranet.alxswe.com/rltoken/zwv5CHLybXN6KFmsjbu_tg)
10. [Linus Torvalds on C vs. C++ (Look at only after you finish consuming the other resources)](https://intranet.alxswe.com/rltoken/JrokM8Pk6bd9wPqQvEfSAA)
11. man or help:<br>
> gcc
> printf (3)
> puts
> putchar


# **Objectives**
> * Why C programming is awesome
> * Who invented C
> * Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
> * What happens when you type gcc main.c
> * What is an entry point
> * What is main
> * How to print text using printf, puts and putchar
> * How to get the size of a specific type using the unary operator sizeof
> * How to compile using gcc
> * What is the default program name when compiling with gcc
> * What is the official C coding style and how to check your code with betty-style
> * How to find the right header to include in your source code when using a standard library function
> * How does the main function influence the return value of the program


# **Tasks**
[0. Preprocessor](./0-preprocessor)<br>
Write a script that runs a C file through the preprocessor and save the result into another file.<br>
> * The C file name will be saved in the variable $CFILE
> * The output should be saved in the file c


[1-compiler](./1-compiler)<br>
Write a script that compiles a C file but does not link.<br>
> * The C file name will be saved in the variable $CFILE
> * The output file should be named the same as the C file, but with the extension .o instead of .c.
> * Example: if the C file is main.c, the output file should be main.o


	vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$ export CFILE=main.c	
	vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-	hello_world$ cat main.c
	#include <stdio.h>
	
	/**
 	*main - Entry point
 	*
 	*Return: Always 0 (Success)
 	*/
	int main(void)
	{
        	return (0);
	}
	vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$ ./1-compiler
	vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$ ls
	0-preprocessor  1-compiler   c            main.o
Makefile               100-intel      main.c  main.s
	vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$ cat -v main.o | head
^?ELF^B^A^A^@^@^@^@^@^@^@^@^@^A^@>^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@X^B^@^@^@^@^@^@^@^@^@^@@^@^@^@^@^@@^@^L^@^K^@M-s^O^^M-zUHM-^IM-eM-8^@^@^@^@]M-C^@GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0^@^@^@^@^@^@^D^@^@^@^P^@^@^@^E^@^@^@GNU^@^B^@^@M-@^D^@^@^@^C^@^@^@^@^@^@^@^T^@^@^@^@^@^@^@^AzR^@^Ax^P^A^[^L^G^HM-^P^A^@^@^\^@^@^@^\^@^@^@^@^@^@^@^O^@^@^@^@E^N^PM-^F^BC^M^FF^L^G^H^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^D^@M-qM-^?^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^E^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^F^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^G^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^D^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^H^@^@^@^R^@^A^@^@^@^@^@^@^@^@^@^O^@^@^@^@^@^@^@^@main.c^@main^@^@^@^@ ^@^@^@^@^@^@^@^B^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@.symtab^@.strtab^@.shstrtab^@.text^@.data^@.bss^@.comment^@.note.GNU-stack^@.note.gnu.property^@.rela.eh_frame^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^[^@^@^@^A^@^@^@^F^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@@^@^@^@^@^@^@^@^O^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@!^@^@^@^A^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@O^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@'^@^@^@^H^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@O^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@,^@^@^@^A^@^@^@0^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@O^@^@^@^@^@^@^@,^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@5^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@{^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@E^@^@^@^G^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^@^@^@^@^@^@^@^@ ^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^H^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@]^@^@^@^A^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M- ^@^@^@^@^@^@^@8^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^H^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@X^@^@^@^D^@^@^@@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-X^A^@^@^@^@^@^@^X^@^@^@^@^@^@^@        ^@^@^@^G^@^@^@^H^@^@^@^@^@^@^@^X^@^@^@^@^@^@^@^A^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-X^@^@^@^@^@^@^@M-p^@^@^@^@^@^@^@
^@^@^@  ^@^@^@^H^@^@^@^@^@^@^@^X^@^@^@^@^@^@^@  ^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-H^A^@^@^@^@^@^@^M^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^Q^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-p^A^@^@^@^@^@^@g^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@
	vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$


[2. Assembler](./2-assembler)<br>
Write a script that generates the assembly code of a C code and save it in an output file.


> * The C file name will be saved in the variable $CFILE
> * The output file should be named the same as the C file, but with the extension .s instead of .c.
> * Example: if the C file is main.c, the output file should be main.s


	vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$ export CFILE=main.c
	vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$ cat main.c
	#include <stdio.h>
	
	/**
 	*main - Entry point
 	*
 	*Return: Always 0 (Success)
 	*/
	int main(void)
	{
        	return (0);
	}
	vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$ ./2-assembler
	vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$ ls
	0-preprocessor  1-compiler  2-assembler c  main.c  main.s  Makefile
	vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$ cat main.s
        	.file   "main.c"
        	.text
        	.globl  main
        	.type   main, @function
	main:
	.LFB0:
        	.cfi_startproc
        	endbr64
        	pushq   %rbp
        	.cfi_def_cfa_offset 16
        	.cfi_offset 6, -16
        	movq    %rsp, %rbp
        	.cfi_def_cfa_register 6
        	movl    $0, %eax
        	popq    %rbp
        	.cfi_def_cfa 7, 8
        	ret
        	.cfi_endproc
	.LFE0:
        	.size   main, .-main
        	.ident  "GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
        	.section        .note.GNU-stack,"",@progbits
        	.section        .note.gnu.property,"a"
        	.align 8
        	.long    1f - 0f
        	.long    4f - 1f
        	.long    5
	0:
        	.string  "GNU"
	1:
        	.align 8
        	.long    0xc0000002
        	.long    3f - 2f
	2:
        	.long    0x3
	3:
        	.align 8
	4:
	vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$



[3. Name](./3-name)<br>
Write a script that compiles a C file and creates an executable named cisfun.


> * The C file name will be saved in the variable $CFILE


	vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$ export CFILE=main.c
	vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$ cat main.c
	#include <stdio.h>
	
	/**
 	*main - Entry point
 	*
 	*Return: Always 0 (Success)
 	*/
	int main(void)
	{
        	return (0);
	}
	vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$ ./3-name
vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$ ls
	0-preprocessor  1-compiler   3-name  cisfun  main.o  Makefile
100-intel       2-assembler  c       main.c  main.s
vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$


[4. Hello, puts](./4-puts.c)<br>
Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.


> * Use the function puts
> * You are not allowed to use printf
> * Your program should end with the value 0


	vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$  gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c && ./a.out
	"Programming is like building a multilingual puzzle
	vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$ echo $?
	0
	vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$



[5. Hello, printf](./5-printf.c)<br>
Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.


> * Use the function printf
> * You are not allowed to use the function puts
> * Your program should return 0
> * Your program should compile without warning when using the -Wall gcc option


	vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-printf.c
	vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$ ./a.out
	with proper grammar, but the outcome is a piece of art,
	vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$ echo $?
	0
	vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$


[6. Size is not grandeur, and territory does not make a nation](./6-size.c)<br>
Write a C program that prints the size of various types on the computer it is compiled and run on.


> * You should produce the exact same output as in the example
> * Warnings are allowed
> * Your program should return 0
> * You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option


[7. Intel](./100-intel)<br>
Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.


> * The C file name will be saved in the variable $CFILE.
> * The output file should be named the same as the C file, but with the extension .s instead of .c.
> * Example: if the C file is main.c, the output file should be main.si


	vagrant@ubuntu-focacvagrant@ubuntu-focal:~/alx-	low_level_programming/0x00-hello_world$ export CFILE=main.c
	vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$ cat main.c
	#include <stdio.h>

	/**
 	*main - Entry point
 	*
 	*Return: Always 0 (Success)
 	*/
	int main(void)
	{
        	return (0);
	}
	vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$ ./100-intel
	vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$  cat main.s
        	.file   "main.c"
        	.intel_syntax noprefix
        	.text
        	.globl  main
        	.type   main, @function
	main:
	.LFB0:
        	.cfi_startproc
        	endbr64
        	push    rbp
        	.cfi_def_cfa_offset 16
        	.cfi_offset 6, -16
        	mov     rbp, rsp
        	.cfi_def_cfa_register 6
        	mov     eax, 0
        	pop     rbp
        	.cfi_def_cfa 7, 8
        	ret
        	.cfi_endproc
	.LFE0:
        	.size   main, .-main
        	.ident  "GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
        	.section        .note.GNU-stack,"",@progbits
        	.section        .note.gnu.property,"a"
        	.align 8
        	.long    1f - 0f
        	.long    4f - 1f
        	.long    5
	0:
        	.string  "GNU"
	1:
        	.align 8
        	.long    0xc0000002
        	.long    3f - 2f
	2:
        	.long    0x3
	3:
        	.align 8
	4:
	vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$



[8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity](./101-quote.c)<br>
Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.<br>

> * You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
> * Your program should return 1
> * Your program should compile without any warnings when using the -Wall gcc option


	vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o quote 101-quote.c
	vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$ ./quote
	and that piece of art is useful" - Dora Korpar, 2015-10-19
	vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$ echo $?
	1
	vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$ cat q
	and that piece of art is useful" - Dora Korpar, 2015-10-19
	vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$ grep printf < 101-quote.c
	vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$ grep put < 101-quote.c
	vagrant@ubuntu-focal:~/alx-low_level_programming/0x00-hello_world$


