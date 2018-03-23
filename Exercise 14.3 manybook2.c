/*
	Name: 赵子豪(ZiHao Zhao)
	Date：2018年3月23日
*/
/*	manybook2.c -- multiple book inventory	*/
#include <stdio.h>
#include <string.h>

#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100			/*	maximum number of books	*/

struct book{			/*	set up book template	*/
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

char * s_gets(char *, int);
void swap(struct book *, struct book *);			//	exchange the variable by pointers
void sort(struct book * [], char *, int n);			//	sort the array of pointer accord to the given string.

int main(void)
{
	struct book library[MAXBKS];			/*	array of book structures	*/
	int count = 0;
	int index;
	struct book * ptstr[MAXBKS];			/*	A pointer point to array of MAXBKS book structures	*/

	printf("Please enter the book title.\n");
	printf("Press [enter] at the start of a line to stop.\n");
	while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0')
	{
		printf("Now enter the author.\n");
		s_gets(library[count].author, MAXAUTL);
		printf("Now enter the value.\n");
		scanf("%f", &library[count++].value);
		while (getchar() != '\n')
			continue;			/*	clear input line	*/
		if (count < MAXBKS)
			printf("Enter the next title.\n");
	}

	if (count > 0)
	{
		printf("Here is the list of you books:\n");
		for (index = 0; index < count; index++)
			printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index].value);
		for (index = 0; index < count; index++)
			ptstr[index] = &library[index];
	//	In order of alphabetized title
		printf("sort by title (a to z)\n");
		sort(ptstr, ptstr[].title, count);
		for (index = 0; index < count; index++)
			printf("%s by %s: $%.2f\n", ptstr[index]->title, ptstr[index]->authour, ptstr[index]->value);
	//	In order of increased value
		printf("sort by  increased value.\n");
		sort(ptstr, ptstr[].value, count);
		for (index = 0; index < count; index++)
			printf("%s by %s: $%.2f\n", ptstr[index]->title, ptstr[index]->authour, ptstr[index]->value);
	}
	else
		printf("No books? Too bad");

	return 0;
}



char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		if (find = strchr(st, '\n'))
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return ret_val;
}



void sort(struct book * ptstr[], char * st, int n)			//	sort the array of pointer accord to the given string.
{
	int i, j;

	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (strcmp(ptstr[i].st, ptstr[j]) > 0)
				swap(ptstr[i], ptstr[j]);
}



void swap(struct book * pt1, struct book * pt2)			//	exchange the variable by pointers
{
	struct book * temp;

	temp = pt1;
	pt1 = pt2;
	pt2 = temp;
}
