/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2018年4月8日
*/
/*	The output of the progarm is different from the text book when it run in Windows system	*/
/*	booksave2.c -- saves structure contents in a file	*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10			/*	maximum number of books	*/

char * s_gets(char *, int);

struct book {			/*	get up book template	*/
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
	int flag;
};

int main(void)
{
	struct book library[MAXBKS];			/*	array of structures	*/
	int count = 0;
	int index, filecount;
	FILE * pbooks;
	int size = sizeof(struct book);

	if ((pbooks = fopen("book.dat", "r+b")) == NULL)
	{
		fputs("Can't open the book.dat file\n",stderr);
		exit(1);
	}

	rewind(pbooks);			/*	go to start of file	*/
	while (count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1)
	{
		if (count == 0)
			puts("Current contents of book.dat:");
		printf("%s by %s: $%.2f\n", library[count].title, library[count].author, library[count].value);
		printf("Do you want to change or deleted this record?\n");
		printf("1) change	2) delete	3) keep it\n");
		while (scanf("%d", &library[count].flag) != 1)
			printf("Please enter the right number of choice.\n");
		while (getchar() != '\n')
			continue;
		if (library[count].flag == 1)
		{
			printf("Please enter the new information.\n");
			printf("Please enter the title\n");
			s_gets(library[count].title, MAXTITL);
			printf("Please enter the author\n");
			s_gets(library[count].author, MAXAUTL);
			puts("Now enter the value");
			scanf("%f", &library[count].value);
			while (getchar() != '\n')
				continue;			/*	clear input line	*/
		}
		else if (library[count].flag == 2)
		{
			puts("delete completed and read next title");
			break;
		}
		count++;
	}
	if (count == MAXBKS)
	{
		fputs("The book.dat file is full.", stderr);
		exit(2);
	}

	puts("Please add new book titles.");
	puts("Press [enter] at the start of a line to stop.");
	while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\n')
	{
		puts("Now enter the author.");
		s_gets(library[count].author, MAXAUTL);
		puts("Now enter the value.");
		scanf("%f", &library[count].value);
		while (getchar() != '\n')
			continue;			/*	clear input line	*/
		printf("Do you want to change or deleted this record?\n");
		printf("1) change	2) delete	3) keep it\n");
		while (scanf("%d", &library[count].flag) != 1)
			printf("Please enter the right number of choice.\n");
		while (getchar() != '\n')
			continue;
		if (library[count].flag == 1)
		{
			printf("Please enter the new information.\n");
			printf("Please enter the title\n");
			s_gets(library[count].title, MAXTITL);
			printf("Please enter the author\n");
			s_gets(library[count].author, MAXAUTL);
			puts("Now enter the value");
			scanf("%f", &library[count].value);
			while (getchar() != '\n')
				continue;			/*	clear input line	*/
		}
		else if (library[count].flag == 2)
		{
			puts("delete completed and read next title.");
			break;
		}
		count++;
		if (count < MAXBKS)
			puts("Enter the next title.");
	}
	if (count == MAXBKS)
	{
		fputs("The book.dat file is full.", stderr);
		exit(2);
	}
	if (count > 0)
	{
		puts("Here is the list of your books:");
		for (index = 0; index < count; index++)
		{

			printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index].value);
		}
		fwrite(&library[filecount], size, count - filecount, pbooks);
	}
	else
		puts("No books? Too bad.\n");

	puts("Bye.\n");
	fclose(pbooks);

	return 0;
}



char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;

	if (ret_val = fgets(st, n, stdin))
		if (find = strchr(st, '\n'))
			*find = '\n';
		else
			while (getchar() != '\n')
				continue;

	return ret_val;
}
