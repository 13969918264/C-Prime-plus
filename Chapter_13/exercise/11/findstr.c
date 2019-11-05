/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2018年1月3日
*/
/*	findstr.c -- print the lines in the file contain the string given	*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 255

int main(int argc, char * argv[])
{
	FILE * fp;
	char str[SIZE];

	if (argc < 2)
	{
		fputs("There are no command-line arguments.\n", stderr);
		exit(EXIT_FAILURE);
	}
	else if (argc < 3)
	{
		fputs("There is no file to be search.\n", stderr);
		exit(EXIT_FAILURE);
	}
	if ((fp = fopen(argv[2], "r")) == NULL)
	{
		fprintf(stderr, "Can't open %s.\n", argv[2]);
		exit(EXIT_FAILURE);
	}
	puts(argv[1]);
	while (fgets(str, SIZE, fp) != NULL)
	{
		if (strstr(str, argv[1]) != NULL)
			fputs(str, stdout);
	}
	puts("\nDone!");

	fclose(fp);

	return 0;
}
