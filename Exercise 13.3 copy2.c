/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月29日
*/
/*	copy2.c -- copy file and you should enter the file names of source and target.	*/
#include <stdio.h>
#include <ctype.h>			//	use toupper() convert characters of source to target
#include <stdlib.h>			//	exit() prototype
#include <string.h>

#define SIZE 31

char * s_gets(char *, int);			//	get the file name
void open_error(FILE *, char *, char *);			//	open a file, and judge if it can't open
int copy(FILE * target, FILE * source);			//	copy characters of source and convert them to uppercase and written to target.
int display(FILE * target, FILE * source);			//	display the file in elsewhere

int main(void)
{
	FILE * fpr;
	FILE * fpw;
	char ch;
	char source[SIZE];
	char target[SIZE];
	int flag;

	puts("Please enter the source filename.");
	s_gets(source, SIZE);
	puts("Now enter the target filename.");
	s_gets(target, SIZE);
	if ((fpr = fopen(source, "rb")) == NULL)
	{
		fprintf(stderr, "Can't open %s.\n", source);
		exit(EXIT_FAILURE);
	}
	if ((fpw = fopen(target, "wb")) == NULL)
	{
		fprintf(stderr, "Can't open %s.\n", target);
		exit(EXIT_FAILURE);
	}
	if (copy(fpw, fpr))
		fputs("Congratulation! copy successfully", stdout);
	else
		fputs("Can't open the file.", stderr);
	fclose(fpr);
	fclose(fpw);
	if ((fpr = fopen(target, "rb")) == NULL)
	{
		fprintf(stderr, "Can't open %s.\n", target);
		exit(EXIT_FAILURE);
	}
	if (display(stdout, fpr))
		fputs("Done!", stdout);
	else
		fputs("Opus.", stderr);
	fclose(fpr);

	return 0;
}



char * s_gets(char * st, int size)
{
	char * ret_val;
	char * find;

	ret_val = fgets(st, size, stdin);			//	 read from stdin

	if (ret_val)
	{
		if (find = strchr(st, '\n'))
			*find = '\0';
		else
			while (getchar() != '\n')			//	omit charactes excess the maxsize of the string
				continue;
	}
}



int copy(FILE * target, FILE * source)
{
	char ch;
	int flag = 0;

	while ((ch = getc(source)) != EOF)
	{
		if(putc(toupper(ch), target))
			flag = 1;
		else
			flag = 0;
	}

	return flag;
}



int display(FILE * target, FILE * source)
{
	char ch;
	int flag = 0;

	while ((ch = getc(source)) != EOF)
	{
		if (putc(ch, target))
			flag = 1;
		else
			flag = 0;
	}

	return flag;
}
