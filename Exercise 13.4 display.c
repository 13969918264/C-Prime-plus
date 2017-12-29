/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月29日
*/
/*	display.c -- display the files listed incommand-line and use argc to control loop	*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	FILE * fp;
	int i = 1;
	char ch;

	if (argc < 2)
	{
		fputs("No command-line parameter.\n", stderr);
		exit(EXIT_FAILURE);
	}
	while (argc-- > 1)
	{
		if ((fp = fopen(argv[i], "r")) == NULL)
		{
			fprintf(stderr, "Can't open %s.\n", argv[i]);
			exit(EXIT_FAILURE);
		}
		while ((ch = getc(fp)) != EOF)
			putc(ch, stdout);
		fclose(fp);
		puts("Done!");
		i++;
	}
	puts("Display all!");

	return 0;
}
