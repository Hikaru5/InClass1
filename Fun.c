/*
 * Fun.c
 *
 *  Created on: Feb 15, 2019
 *      Author: hikar
 */


#include <stdio.h>

int A;
int B;

int fun()
{
	static int count = 0;
	count++;
	return count;
}

int Add()
{
	return A+B;
}

int main()
{
	int answer;
	A = 5;
	B = 7;
	answer = Add();
	printf("%d\n", answer);
	printf("%d ", fun());
	printf("%d ", fun());
	return 0;
}

