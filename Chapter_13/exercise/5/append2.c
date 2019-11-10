/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月22日
*/
/*	append2.c -- appends files to a file	*/
#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 4096

void append(FILE * source, FILE * dest);

int main(int argc, char * argv[])
{
	FILE * fa, * fs;			//	fa for append file, fs for source file
	char ch;
	int i = 2;
	int files = 0;

	if (argc < 3)
	{
		fputs("command-line arguments is less than required.\n", stderr);
		exit(EXIT_FAILURE);
	}
	if ((fa = fopen(argv[1], "a+")) == NULL)
	{
		fprintf(stderr, "Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)
	{
		fputs("Can't create output buffer\n", stderr);
		exit(EXIT_FAILURE);
	}
	while (argc-- > 2)
	{
		if (strcmp(argv[1], argv[i]) == 0)
			fputs("Can't append file to itself.\n", stderr);
		else if ((fs = fopen(argv[i], "r")) == NULL)
			fprintf(stderr,"Can't open %s.\n", argv[i]);
		else
		{
			if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)
			{
				fputs("Can't create input buffer\n", stderr);
				i++;
				continue;
			}
			append(fs, fa);
			if (ferror(fs) != 0)
				fprintf(stderr, "Error in reading %s\n", argv[i]);
			if (ferror(fa) != 0)
				fprintf(stderr, "Error in writing file %s.\n", argv[1]);
			fclose(fs);
			files++;
			printf("File %s append.\n", argv[i]);
		}
		i++;
	}
	printf("Done appending. %d files appended.\n", files);
	rewind(fa);			// back to the begin of the file
	printf("%s contents:\n", argv[1]);
	while ((ch = getc(fa)) != EOF)
		putchar(ch);
	puts("Done displaying.");
	fclose(fa);

	return 0;
}



void append(FILE * source, FILE * dest)
{
	size_t bytes;
	static char temp[BUFSIZE];			//	allocate once

	while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
		fwrite(temp, sizeof(char), bytes, dest);
}
