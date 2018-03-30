/*
	Name: 赵子豪(ZiHao Zhao)
	Date：2018年3月30日
*/
/*	player.c -- the scores of some baseball players	*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXNUM 19			//	players' number in the range 0 - 18
#define NAMESIZE 31

struct scores {
	char first[NAMESIZE];
	char last[NAMESIZE];
	unsigned int bats;
	unsigned int hits;
	unsigned int walks;
	unsigned int rpis;
	unsigned int bat_aver;
};

void access(FILE *);			//	read content from files
unsigned int calculate(struct scores * , unsigned int);			//	calculate the bat average
char * s_gets(char *, int);

int main(void)
{
	struct scores players[MAXNUM];
	int index;
	FILE * ptf;
	char file_name[NAMESIZE];

	for (index = 0; index < MAXNUM; index++)
		players[index] = {
			.bats = 0,
			.hits = 0,
			.walks = 0,
			.rpis = 0,
			.bat_aver = 0
		};
	puts("Enter the file name.");
    s_gets(file_name, NAMESIZE);
	if ((ptf = fopen(file_name, 'r')) == NULL)
	{
		fprintf(stderr, "Can't open the file %s.\n", file_name)
		exit(EXIT_FAILURE);
	}

	return 0;
}
