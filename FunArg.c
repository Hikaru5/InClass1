/*
 * FunArg.c
 *
 *  Created on: Feb 15, 2019
 *      Author: hikar
 */

/*
 * StructPoint.c
 *
 *  Created on: Feb 15, 2019
 *      Author: hikar
 */

#include <stdio.h>
#include <string.h>

struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

void printBook(struct Books book);

int main()
{
	struct Books Book1;
	struct Books Book2;

	strcpy(Book1.title, "C Programmind");
	strcpy(Book1.author, "Nuha Ali");
	strcpy(Book1.subject, "C Programming Tutorial");
	Book1.book_id = 6495407;

	strcpy(Book2.title, "Telecom Billing");
	strcpy(Book2.author, "Zara Ali");
	strcpy(Book2.subject, "Telecom Billing Tutorial");
	Book2.book_id=649700;

	printBook(Book1);
	printBook(Book2);

	return 0;
}

void printBook(struct Books book)
{
	printf("Book title : %s\n", book.title);
	printf("Book author : %s\n", book.author);
	printf("Book subject : %s\n", book.subject);
	printf("Book book_id : %d\n", book.book_id);
}

