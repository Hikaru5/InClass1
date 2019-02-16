/*
 * StrLibs.c
 *
 *  Created on: Feb 15, 2019
 *      Author: hikar
 */

#include <stdio.h>

int main()
{
	char str[100];

	printf("Enter a value :");
	fflush(stdout);
	gets(str);

	printf("\nYou entered: ");
	puts(str);

	return 0;
}
