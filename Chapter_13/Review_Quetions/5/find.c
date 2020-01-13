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
	FILE * fp;
	char str[SIZE];

	if (argc < 3)
		fputs("Command-line arguments is less or none.\nbye.\n",stdout);
	else
	{
		if ((fp = fopen(argv[2], "r")) == NULL)
		{
			fprintf(stderr, "Can't open %s.\n", argv[2]);
			exit(EXIT_FAILURE);
		}
		while (fgets(str, SIZE, fp) != NULL)
		/*	fgets() reads character to the end of a line, it will stop.	*/
		{
			if (strchr(str, *argv[1]))
				fputs(str, stdout);
		}
		fclose(fp);
	}

	return 0;
}
