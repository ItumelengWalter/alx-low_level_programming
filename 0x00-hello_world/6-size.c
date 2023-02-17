#include <stdio.h>
/**
*main -Entry poiny " A programm that prints the size of various computer types"
*Return: 0 (Success)
*/
int main(void)
{
	printf("Size of a char: %zu bytes(s)\n", sizeof(char));
	printf("Size of an int: %zu bytes(s)\n", sizeof(int));
	printf("Size of a long int: %zu bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu bytes(s)\n", sizeof(long long int));
	printf("Size of s float: %zu bytes(s)\n", sizeof(float));
	return (0);
}
