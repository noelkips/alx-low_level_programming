# **0x12-singly_linked_lists**

The resources and the projects done in this repository covers the following<br>
1. When and why using linked lists vs arrays
2. How to build and use linked lists

**Resources**

[Linked Lists](https://intranet.alxswe.com/rltoken/joxg32-tt4lUh8Afgst8tA)

[Google](https://intranet.alxswe.com/rltoken/USaZbNdfcuIFII-K2YPsKQ)

[Youtube](https://intranet.alxswe.com/rltoken/epKUCIcoA6XaN1T3Vtr_9w)

**Requirements**
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
12. The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called lists.h
13. Don’t forget to push your header file
14. All your header files should be include guarded

More Info
use this data structure for this project:


	/**
 	* struct list_s - singly linked list
 	* @str: string - (malloc'ed string)
 	* @len: length of the string
 	* @next: points to the next node
	 *
 	* Description: singly linked list node structure
	 */
	typedef struct list_s
	{
    		char *str;
   		 unsigned int len;
   		 struct list_s *next;
	} list_t;


[0. Print list](./0-print_list.c)<br>
Write a function that prints all the elements of a list_t list.<br>
> * Prototype: size_t print_list(const list_t *h);<br>
> * Return: the number of nodes<br>
> * Format: see example<br>
> * If str is NULL, print [0] (nil)<br>
> * You are allowed to use printf


[1. List length](./1-list_len.c)<br>
Write a function that returns the number of elements in a linked list_t list.<br>
> * Prototype: size_t list_len(const list_t *h);


[2. Add node](./2-add_node.c)<br>
Write a function that adds a new node at the beginning of a list_t list.<br>
> * Prototype: list_t *add_node(list_t **head, const char *str);<br>
> * Return: the address of the new element, or NULL if it failed
> * str needs to be duplicated
> * You are allowed to use strdup


[3. Add node at the end](./3-add_node_end.c)<br>
Write a function that adds a new node at the end of a list_t list.
> * Prototype: list_t *add_node_end(list_t **head, const char *str);
> * Return: the address of the new element, or NULL if it failed
> * str needs to be duplicated
> * You are allowed to use strdup


[4. Free list](./4-free_list.c)<br>
Write a function that frees a list_t list.
> * Prototype: void free_list(list_t *head);


[5. The Hare and the Tortoise](./100-first.c)<br>
![image](./test_files/task.jpg)
Write a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.
> * You are allowed to use the printf function


[6. Real programmers can write assembly code in any language](./101-hello_holberton.asm)<br>
Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.<br>
	* You are only allowed to use the printf function
	* You are not allowed to use interrupts
	* Your program will be compiled using nasm and gcc:

