#include <stdio.h>
/**
 * main - A program that print a line using the printf function
 * Return: always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("Size of an int: %lu byte(s)", sizeof(int));
	printf("Size of a long int: %lu byte(s)", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)", sizeof(long long int));
	ptintf("Size of a float: %lu byte(s)", sizeof(float));
			return (0);
}
