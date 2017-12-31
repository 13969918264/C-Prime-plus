/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月31日
*/
/*	print_sameline2.c -- print lines of two files one by one	*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 31
#define MAX 256

char * s_gets(char *, int);

int main(int argc, char * argv[])
{
	char file1[SIZE], file2[SIZE];
	FILE * fp1, * fp2;
	char temp1[MAX], temp2[MAX];
	int i;

	if (argc >= 3)
	{
		fprintf(stdout, "there are %d files. we use %d files", argc - 1, 2);
		strcpy(file1, argv[1]);
		strcpy(file2, argv[2]);
	}
	else
	{
		puts("There are no command-line arguments.");
		puts("Enter a filename.");
		s_gets(file1, SIZE);
		puts("Enter a filename.");
		s_gets(file2, SIZE);
	}
	if ((fp1 = fopen(file1, "r")) == NULL)
	{
		fprintf(stderr, "Can't open %s.", file1);
		exit(EXIT_FAILURE);
	}
	if ((fp2 = fopen(file2, "r")) == NULL)
	{
		fprintf(stderr, "Can't open %s.", file2);
		exit(EXIT_FAILURE);
	}
	while (fgets(temp1, MAX, fp1) != NULL && fgets(temp2, MAX, fp2) != NULL)
	{
		strcat(temp1, temp2);
		for (i = 0; temp1[i] != '\n'; i++)
			continue;
		if (temp1[i] == '\n')
			temp1[i] = '\t';
		fputs(temp1, stdout);
	}
	if (fgets(temp1, MAX, fp1) == NULL)
	{
		fprintf(stdout, "%s is to the end.\n", file1);
		while (fgets(temp2, MAX, fp2) != NULL)
			fputs(temp2, stdout);
		fprintf(stdout, "%s is to the end.\n", file2);
	}
	else
	{
		fprintf(stdout, "%s is to the end.", file2);
		while (fgets(temp1, MAX, fp1) != NULL)
			fputs(temp1, stdout);
		fprintf(stdout, "%s is to the end.", file1);
	}
	if ((fclose(fp1) != 0) || (fclose(fp2)))
		fprintf(stderr, "Error in closing files.");
	puts("Done!");

	return 0;
}



char * s_gets(char * st, int n)
{
	char * find, * ret_val;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return ret_val;
}
