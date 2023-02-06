# **0x14. C - Bit manipulation**

This projects covers the following concepts<br>
> * Look for the right source of information without too much help
> * How to manipulate bits and use bitwise operators

[0. 0](./0-binary_to_uint.c)
Write a function that converts a binary number to an unsigned int.<br>
> * Prototype: unsigned int binary_to_uint(const char *b);
> * where b is pointing to a string of 0 and 1 chars
> * Return: the converted number, or 0 if
> * there is one or more chars in the string b that is no


[1.1](./1-print_binary.c)<br>
Write a function that prints the binary representation of a number.<br>
> * Prototype: void print_binary(unsigned long int n);
> * Format: see example
> * You are not allowed to use arrays
> * You are not allowed to use malloc
> * You are not allowed to use the % or / operators


[2.10](./2-get_bit.c)
Write a function that returns the value of a bit at a given index.


> * Prototype: int get_bit(unsigned long int n, unsigned int index);
> * where index is the index, starting from 0 of the bit you want to get
> * Returns: the value of the bit at index index or -1 if an error occured

[3. 11](./3-set_bit.c)
Write a function that sets the value of a bit to 1 at a given index.(br>
> * Prototype: int set_bit(unsigned long int *n, unsigned int index);
> * where index is the index, starting from 0 of the bit you want to set
> * Returns: 1 if it worked, or -1 if an error occurred


