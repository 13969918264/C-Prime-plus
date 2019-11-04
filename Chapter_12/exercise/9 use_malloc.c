/*
	Name: 赵子豪(Zihao Zhao)
	Date: 2017年12年18日
*/
/*	use_malloc.c	-- use malloc() to create array	*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 100

int main(void)
{
	int i = 0;
	int begin;
	int count = 0;
	int num;
	char * (* pt);			//	a pointer to a pointer to char,
	char temp[MAX];

	printf("How many words do you wish to enter?: ");
	scanf("%d", &num);

	while (getchar() != '\n')
		continue;
	pt = (char * *) malloc(num * sizeof(char *));			// choose the right type
	printf("Enter %d words now!\n", num);
	while (isspace(temp[i] = getchar()) || ispunct(temp[i]))
		continue;			//	discard the whitespace before and punctuation the first alphabet
	while (i++ < MAX &&(temp[i] = getchar()) != '\n')
		continue;
	if (i >= MAX)
	{
		printf("Your words are too long,"
				" exceeding %d alpahbets,"
				" the rest will be as anoter word",
				MAX);
		temp[MAX - 1] = '\0';
	}
	else
		temp[i] = '\0';
	puts(temp);
	for (i = 0, begin = i; count < num; i++)
	{
		if (isspace(temp[i]) || ispunct(temp[i]))
		{
			temp[i] = '\0';
			pt[count] = (char *) malloc((i + 1 - begin) * sizeof(char));
			pt[count] = &temp[begin];
			puts(pt[count]);
			begin = i + 1;
			count++;
		}
	}
	free(pt);

	return 0;
}
