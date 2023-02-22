#include <stdio.h>
#include <string.h>
/**
 * main - Entry point of  main
 * Description - Prints the array string "C is fun"
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	char msg[] = "C is fun";

	for (i = 0; i < strlen(msg); i++)
	{
		putchar(msg[i]);
	}
	putchar('\n');
	return (0);
}

