/*
 * File.c
 *
 *  Created on: Feb 15, 2019
 *      Author: hikar
 */

#include <stdio.h>

int main()
{
	FILE *fp;

	fp = fopen("textFile.txt", "w+");
	fprintf(fp, "This is testing for fprintf...\n");
	fputs("This is testing for fputs...\n", fp);
	fclose(fp);
	return 0;
}
