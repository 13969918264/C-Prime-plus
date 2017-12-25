/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月25日
*/
/*	find.c -- find a character in the second command-line argument
	from the file indicated by the third argument.	*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 256

int main(int argc, char * argv[])
{
	char ch;
	FILE * fp;
	char pt[SIZE];

	if (argc < 3)
		fputs("Command-line arguments is less or none.\nbye.\n",stdout);
	else
	{
		if ((fp = fopen(argv[2], "r")) == NULL)
		{
			fprintf(stderr, "Can't open %s.\n", argv[2]);
			exit(EXIT_FAILURE);
		}
		while ((ch = getc(fp)) != EOF)
		{
			if (ch == *argv[1])
			{
				putc(ch, stdout);
				putchar('\n');
			}
		}
		fclose(fp);
	}

	return 0;
}
