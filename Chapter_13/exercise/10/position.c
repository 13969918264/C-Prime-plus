/*
	name: 赵子豪(ZiHao Zhao)
	Date: 2018年1月2日
*/
/*	position.c -- print the content in a file from a given position	*/
#include <stdio.h>
#include <stdlib.h>

#define SIZE 31

char * s_gets(char *, int);

int main(void)
{
	FILE * fp;
	char name[SIZE];
	int position;
	char ch;

	puts("Enter the file name.");
	s_gets(name,SIZE);
	if ((fp = fopen(name, "r")) == NULL)
	{
		fprintf(stderr, "Can't open %s.\n", name);
		exit(EXIT_FAILURE);
	}
	puts("Enter the position where you want to begin to print characters. (nonnumberic or negative to quit)");
	while (fscanf(stdin, "%d", &position) == 1)
	{
		if (position < 0)
			break;
		position = (long) (position * sizeof(char));
		fseek(fp, position, SEEK_SET);			//	calculate offset, the represation changes, but the value not.
		while ((ch = getc(fp)) != '\n')
			putc(ch, stdout);
		puts("\nThe next position (negative or nonnumeric to quit)");
	}
	fclose(fp);
	puts("Done!");

	return 0;
}



char * s_gets(char * st, int n)
{
	char * ret_val;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		while (*st != '\n' && *st != '\0')
			st++;
		if (*st == '\n')
			*st = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return ret_val;
}
