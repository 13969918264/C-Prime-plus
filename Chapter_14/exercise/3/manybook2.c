/*
	Name: 赵子豪(ZiHao Zhao)
	Date：2018年3月23日
*/
/*	manybook2.c -- multiple book inventory	*/

/*	When I want to swap two struct instance by using an function with two argument, but it can't be able to do that.
	I don't know why, I suspect that the function arguments are duplication of ther rural parameter.
*/
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
void swap(struct book *, struct book *);			//	exchange the variable by pointers.
void sort_title(struct book * [], int);			//	sort the array of pointer accord to the title.
void sort_value(struct book * [], int);			//	sort the array of pointer accord to the value.
void print_str(struct book * [], int);

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
		sort_title(ptstr, count);
		print_str(ptstr, count);
	//	In order of increased value
		printf("sort by  increased value.\n");
		sort_value(ptstr, count);
		print_str(ptstr, count);
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



void sort_title(struct book * ptstr[], int n)			//	sort the array of pointer accord to the title.
{
	int i, j;

	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
		{
			printf("the earlier is %s, the other is %s\n", ptstr[i]->title, ptstr[j]->title);
			if (strcmp(ptstr[i]->title, ptstr[j]->title) > 0)
			{
				struct book * temp;

				temp = ptstr[i];
				ptstr[i] = ptstr[j];
				ptstr[j] = temp;
			}
			printf("Now, the earlier is %s, the other is %s\n", ptstr[i]->title, ptstr[j]->title);
		}
}



void sort_value(struct book * ptstr[], int n)			//	sort the array of pointer accord to the value.
{
	int i, j;

	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
		{
			printf("the earlier is %f, the other is %f\n", ptstr[i]->value, ptstr[j]->value);
			if (ptstr[i]->value > ptstr[j]->value)
			{
				struct book * temp;

				temp = ptstr[i];
				ptstr[i] = ptstr[j];
				ptstr[j] = temp;
			}
			printf("Now, the earlier is %f, the other is %f\n", ptstr[i]->value, ptstr[j]->value);
		}
}



void print_str(struct book * pt[], int n)
{
	int index = 0;

	for (index = 0; index < n; index++)
		printf("%s by %s: $%.2f\n", pt[index]->title, pt[index]->author, pt[index]->value);
}
