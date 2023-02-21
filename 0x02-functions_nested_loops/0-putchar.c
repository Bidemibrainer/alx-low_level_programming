<<<<<<< HEAD
#include "main.h"
/*
 * main - main function
 * _putchar: print the alphabet putchar
 * Return: always 0
 */

int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
=======
#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: The character to print
 * Return: On success 1
 * on error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
>>>>>>> d336ee3ebe4286e6ab3cd3b623c5b1345069c8d6
}
