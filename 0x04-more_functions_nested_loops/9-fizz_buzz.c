#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/*
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three points Fizz instead of the number
 * and for the multiples of five points Buzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char f[] = "Fuzz";
	char b[] = "Buzz";
	char fb[] = "FuzzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%s", b);
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s ", fb);
		else if (i % 3 == 0)
			printf("%s ", f);
		else if (i % 5 == 0)
			printf("%s ", b);
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
