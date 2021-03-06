/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月31日
*/
/*	addaword2.c -- uses fprintf(), fscanf(), and rewind() and numbered each word	*/
/*	I give up to this problems, I will do it one day.	*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41

int main(void)
{
	FILE *fp;
	char words[MAX];
	int count[MAX];
	long last;
	long i;
	int number = 0;

	if ((fp = fopen("wordy", "ab+")) == NULL)
	{
		fprintf(stdout, "Can't open \"wordy\"file.");
		exit(EXIT_FAILURE);
	}
	fseek(fp, 0L, SEEK_END);
	last = ftell(fp);
	rewind(fp);
	for (i = 0; i < last && (fscanf(fp, "%s", count) == 1); i++)
	{
		if (isdigit(count[0]))
			number = count[0];
	}
	fclose(fp);
	if ((fp = fopen("wordy", "ab+")) == NULL)
	{
		fprintf(stdout, "Can't open \"wordy\"file.");
		exit(EXIT_FAILURE);
	}
	puts("Enter words to add to the file; press the #");
	puts("key at the beginning of a line to terminate.");
	while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
	{
		number++;
		fprintf(fp, "%d: %s\n", number, words);
	}
	puts("File contents:");
	rewind(fp);			/*	go back to beginning of file	*/
	while (fscanf(fp, "%s", words) == 1)
		puts(words);
	puts("done!");
	if (fclose(fp) != 0)
		fprintf(stderr, "Error in closing file.\n");

	return 0;
}
