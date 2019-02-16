/*
 * Union.c
 *
 *  Created on: Feb 15, 2019
 *      Author: hikar
 */

#include <stdio.h>
#include <string.h>

union Data
{
	int i;
	float f;
	char str[20];
};

int main()
{
	union Data data;

	printf("Memory size occupied by data : %d\n", sizeof(data));

	return 0;
}
