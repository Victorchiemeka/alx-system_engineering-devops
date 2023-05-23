#include <stdio.h>
/**
 * main - a function that prints out string
 * Return: always sucess
 */
int main(void)
{
	char string[] = "_putchar";
	int index;

	for (index = 0; string[index]; index++)
		putchar(string[index]);
	putchar('\n');
	return (0);
}
