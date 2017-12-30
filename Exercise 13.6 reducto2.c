/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月30日
*/
//	reducto2.c -- reduces your file by two-thirds!
#include <stdio.h>
#include <stdlib.h>			//	for exit()
#include <string.h>

char * s_gets(char *, int);

#define LEN 100

int main(void)
{
	FILE * in, * out;			//	declare two FILE pointers
	int ch;
	char sourcename[LEN];			//	storage fot source filename
	char outputname[LEN];			//	storage for output filename
	int count = 0;

	puts("Enter the source filename.");
	s_gets(sourcename, LEN);
	//	set up input
	if ((in = fopen(sourcename, "r")) == NULL)
	{
		fprintf(stderr, "I could not open the file \"%s\"\n", sourcename);
		exit(EXIT_FAILURE);
	}
	//	set up output
	strncpy(outputname, sourcename, LEN - 5);			//	copy filename
	outputname[LEN - 5] = '\0';
	strcat(outputname, ".red");			//	append .red
	if ((out = fopen(outputname, "w")) == NULL)
	{			//	open file for writing
		fprintf(stderr, "Can't create output file.\n");
		exit(3);
	}
	//	copy data
	while ((ch = getc(in)) != EOF)
		if (count++ %3 == 0)
			putc(ch, out);			//	print every 3rd char
	//	clear op
	if (fclose(in) != 0 || fclose(out) != 0)
		fprintf(stderr, "Error in closing files\n");

	return 0;
}



char * s_gets(char * st, int i)
{
	char * ret_val;
	char * find;

	ret_val = fgets(st, i, stdin);
	if (ret_val)
	{
		find = strchr(ret_val, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return ret_val;
}
