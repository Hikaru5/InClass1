/*
 * Library.c
 *
 *  Created on: Feb 15, 2019
 *      Author: hikar
 */

#include <stdio.h>

typedef int number;

int main()
{
	number c;
	printf("Enter a value :");
	fflush(stdout);
	c = getchar();

	printf("\nYou entered: ");
	putchar(c);

	return 0;
}
