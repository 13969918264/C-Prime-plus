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
	while (count < num)
	{
		while (isspace(temp[i] = getchar()) || ispunct(temp[i]))
			continue;
		i++;
		while (i < MAX && (isspace(temp[i] = getchar()) || ispunct(temp[i])))
			i++;
		if (i >= MAX)
		{
			printf("Your words are too long, exceeding %d alpahbets, the rest will be as anoter word", MAX);
			temp[--i] = '\0';
		}
		else
			temp[i] = '\0';
		puts(temp);
		pt[count] = (char *) malloc((i + 1) * sizeof(char));
		pt[count] = temp;

		count++;
	}
	while (getchar() != '\n')
		continue;
/*
	for (count = 0; count < num; count++)
	{
		puts(pt[count]);
		free(pt[count]);
	}
	free(pt);
*/
	return 0;
}
