/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月28日
*/
/*	count2.c -- modify the count.c in this chapter	*/
#include <stdio.h>
#include <stdlib.h>

#define SIZE 31

int main(void)
{
	char str[SIZE];
	char ch;
	FILE *fp;
	int count;

	puts("Enter the file name (less 30 characters).");
	while (fgets(str, SIZE, stdin) != NULL)
	{
		if (str[0] == '\n')
			puts("Program is over.");
		if ((fp = fopen(str, "r")) == NULL)
		{
			printf("Can't open %s.", str);
			exit(EXIT_FAILURE);
		}
		count = 0;
		while ((ch = getc(fp)) != EOF)
		{
			putc(ch, stdout);
			count++;
		}
		fclose(fp);
		printf("%s has %d characters.\n", str, count);
		puts("Enter the next file name.");
	}
	return 0;
}
