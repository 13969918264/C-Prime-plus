/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月28日
*/
/*	copy.c -- copy a file	*/
#include <stdio.h>
#include <stdlib.h>

void print(char *);
void copy(FILE *, FILE *);

int main(int argc, char * argv[])
{
	FILE * fpr;
	FILE * fpw;
	char ch;
	if (argc < 3)
	{
		puts("Must 3 Command-line arguments");
		exit(EXIT_FAILURE);
	}
	if ((fpr = fopen(argv[1], "rb")) == NULL)
		print(argv[1]);
	if ((fpw = fopen(argv[2], "wb")) == NULL)
		print(argv[2]);
	copy(fpw, fpr);
	fclose(fpr);
	fclose(fpw);
	if ((fpr = fopen(argv[2], "rb")) == NULL)
		print(argv[2]);
	copy(stdout, fpr);
	fclose(fpr);

	return 0;
}



void print(char * p)
{
	fprintf(stderr, "Can't open %s.\n", p);
	exit(EXIT_FAILURE);
}



void copy(FILE * fpw, FILE * fpr)
{
	char ch;

	while ((ch = getc(fpr)) != EOF)
		putc(ch, fpw);
}
