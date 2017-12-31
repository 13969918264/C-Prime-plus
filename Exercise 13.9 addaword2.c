/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月31日
*/
/*	addaword2.c -- uses fprintf(), fscanf(), and rewind() and numbered each word	*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 41

int main(void)
{
	FILE *fp;
	char words[MAX];
	int count = 0;

	if ((fp = fopen("wordy", "r")) == NULL)
	{
		fprintf(stdout, "Can't open \"wordy\"file.");
		exit(EXIT_FAILURE);
	}
	fseek (fp, 0L, SEEK_END);
	fscanf(fp, "%d", &count);
	fclose(fp);
	if ((fp = fopen("wordy", "a+")) == NULL)
	{
		fprintf(stdout, "Can't open \"wordy\"file.");
		exit(EXIT_FAILURE);
	}
	puts("Enter words to add to the file; press the #");
	puts("key at the beginning of a line to terminate.");
	while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
	{
		count++;
		fprintf(fp, "%d: %s\n", count, words);
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
