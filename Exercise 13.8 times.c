/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月31日
*/
/* times.c -- find a character ocour times in a files and use command-line arguments	*/
#include <stdio.h>
#include <stdlib.h>

#define MAX 256

int main(int argc, char * argv[])
{
	FILE * fp;
	int count;
	int i;
	char st[MAX];
	char ch;

	if (argc < 2)
	{
		puts("There are no arguments. bye.");
		exit(EXIT_FAILURE);
	}
	else if (argc < 3)
	{
		puts("There are a argument.");
		printf("It's %c.\n", *argv[1]);
		puts("Enter as you like (END OF FILE TO QUIT).");
		for (i = 0, count = 0; (st[i] = getchar()) != EOF && i < MAX; i++)
		{
			if (st[i] == *argv[1])
				count++;
		}
		if (i == MAX)
		{
			st[MAX - 1] == '\0';
			printf("You enter too much. we choose the first %d character.", MAX - 1);
			while (getchar() != EOF)
				continue;
		}
		puts("You entered :");
		puts(st);
		printf("Having %d character %c.\n", count, *argv[1]);
	}
	else
	{
		for (i = 2, count = 0; i < argc; i++)
		{
			fprintf(stdout, "The character is %c\n", *argv[1]);
			if ((fp = fopen(argv[i], "r")) == NULL)
			{
				fprintf(stderr, "Can't oepn %s.", argv[i]);
				continue;
			}
			while ((ch = getc(fp)) != EOF)
			{
				if (ch == *argv[1])
					count++;
			}
			if (fclose(fp) != 0)
				fprintf(stderr, "Error in closing %s", argv[i]);
			fprintf(stdout, "In %s, %c occour %d times\n", argv[i], *argv[1], count);
			puts("Let's look at next file.");
		}
		puts("Oh, there are no files. bye.");
	}

	return 0;
}
