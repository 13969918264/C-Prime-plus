/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月25日
*/
/*	sum.c -- calculate the arithmetic mean of the input numbers	and i create a wrong name	*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 30

int main(int argc, char * argv[])
{
	double sum = 0;
	double average;
	float n;
	int count = 0;
	int i = 0;
	FILE * fp;
	char filename[SIZE];

	if (argv[1])
		strcpy(filename, argv[1]);
	else
	{
		fputs("Enter the filename.\n", stdout);
		fgets(filename, SIZE - 1, stdin);
		while (filename[i] != '\n')
			i++;
		filename[i] = '\0';			// the arrary contains the file name must be a string, so it ends with '\0'.
	}
	if ((fp = fopen(filename, "r")) == NULL)
	{
		fprintf(stdout, "Can't open %s\n", filename);
		exit(EXIT_FAILURE);
	}
	while (fscanf(fp, "%f", &n) == 1)
	{
		sum += n;
		count++;
	}
	average = sum / count;		//	represent the arithmetic mena
	fclose(fp);
	fprintf(stdout, "the sum is %lf, the file has %d numbers, the average is %lf",
			sum, count, average);

	return 0;
}
