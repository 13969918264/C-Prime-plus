/*
	Name: 赵子豪(ZiHao Zhao)
	Date：2018年3月30日
*/
/*	player.c -- the scores of some baseball players	*/
/*	Initialized an array of sturct, should i do it when declara it?	*/
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
	float bat_aver;
};

struct scores players[MAXNUM] = {
	{
		.bats = 0,
		.hits = 0,
		.walks = 0,
		.rpis = 0,
		.bat_aver = 0
	},
	{
		.bats = 0,
		.hits = 0,
		.walks = 0,
		.rpis = 0,
		.bat_aver = 0
	},
	{
		.bats = 0,
		.hits = 0,
		.walks = 0,
		.rpis = 0,
		.bat_aver = 0
	},
	{
		.bats = 0,
		.hits = 0,
		.walks = 0,
		.rpis = 0,
		.bat_aver = 0
	},
	{
		.bats = 0,
		.hits = 0,
		.walks = 0,
		.rpis = 0,
		.bat_aver = 0
	},
	{
		.bats = 0,
		.hits = 0,
		.walks = 0,
		.rpis = 0,
		.bat_aver = 0
	},
	{
		.bats = 0,
		.hits = 0,
		.walks = 0,
		.rpis = 0,
		.bat_aver = 0
	},
	{
		.bats = 0,
		.hits = 0,
		.walks = 0,
		.rpis = 0,
		.bat_aver = 0
	},
	{
		.bats = 0,
		.hits = 0,
		.walks = 0,
		.rpis = 0,
		.bat_aver = 0
	},
	{
		.bats = 0,
		.hits = 0,
		.walks = 0,
		.rpis = 0,
		.bat_aver = 0
	},
	{
		.bats = 0,
		.hits = 0,
		.walks = 0,
		.rpis = 0,
		.bat_aver = 0
	},
	{
		.bats = 0,
		.hits = 0,
		.walks = 0,
		.rpis = 0,
		.bat_aver = 0
	},
	{
		.bats = 0,
		.hits = 0,
		.walks = 0,
		.rpis = 0,
		.bat_aver = 0
	},
	{
		.bats = 0,
		.hits = 0,
		.walks = 0,
		.rpis = 0,
		.bat_aver = 0
	},
	{
		.bats = 0,
		.hits = 0,
		.walks = 0,
		.rpis = 0,
		.bat_aver = 0
	},
	{
		.bats = 0,
		.hits = 0,
		.walks = 0,
		.rpis = 0,
		.bat_aver = 0
	},
	{
		.bats = 0,
		.hits = 0,
		.walks = 0,
		.rpis = 0,
		.bat_aver = 0
	},
	{
		.bats = 0,
		.hits = 0,
		.walks = 0,
		.rpis = 0,
		.bat_aver = 0
	}
	};

void access_calculate(FILE *, struct scores *);			//	read content from files and calculate them
char * s_gets(char *, int);

int main(void)
{
//	struct scores players[MAXNUM];
	int index = 0;
	FILE * ptf;
	char file_name[NAMESIZE];
/*
	for (index = 0; index < MAXNUM; index++)
		players[index] = {
			.bats = 0,
			.hits = 0,
			.walks = 0,
			.rpis = 0,
			.bat_aver = 0
		};
*/
	puts("Enter the file name.");
    s_gets(file_name, NAMESIZE);
	if ((ptf = fopen(file_name, "r")) == NULL)
	{
		fprintf(stderr, "Can't open the file %s.\n", file_name);
		exit(EXIT_FAILURE);
	}
	while (fscanf(ptf, "%d", &index) != EOF)
	{
		if (index < 0 || index > 18)
		{
			fprintf(stderr, "Error: %d is not a number of a player\n", index);
			exit(EXIT_FAILURE);
		}
		getc(ptf);
	//	printf("Here is %d.\n", index);
		access_calculate(ptf, &players[index]);
	}
	printf("Access and calculate successfully.\n");
	fprintf(stdout, "Now, there are the scores of players.\n");
	printf("number	first name	last name	bats	hits	walks	rpis	aver_bat\n");
	for (index = 0; index < MAXNUM; index++)
		printf("%d	%s		%s		%d	%d	%d	%d	%f\n",
			index, players[index].first, players[index].last, players[index].bats, players[index].hits,	players[index].walks, players[index].rpis, players[index].bat_aver);
	if (fclose(ptf) != 0)
		fprintf(stderr, "Error in closing files\n");

	return 0;
}



char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
		if (find = strchr(st, '\n'))
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;

	return ret_val;
}



void access_calculate(FILE * ptf, struct scores * pts)
{
	int index;
	char ch;
	unsigned int bats = 0;
	unsigned int hits = 0;
	unsigned int walks = 0;
	unsigned int rpis = 0;

//	printf("Access first name of a player.\n");
	for (index = 0; (ch = getc(ptf)) != ' ' && index < NAMESIZE; index++)
		pts->first[index] = ch;
	pts->first[index] = '\0';
//	printf("Access last name of a player.\n");
	for (index = 0; (ch = getc(ptf)) != ' ' && index < NAMESIZE; index++)
		pts->last[index] = ch;
	pts->last[index] = '\0';			//	produce a string, not an array
//	printf("%s %s\n", pts->first, pts->last);
//	printf("Access the bats.\n");
	fscanf(ptf, "%u", &bats);
	pts->bats += bats;
//	printf("bats: %u\n", pts->bats);
//	printf("Access the hits.\n");
	fscanf(ptf, "%u", &hits);
	pts->hits += hits;
//	printf("hits: %u\n", pts->hits);
//	printf("Access the walks.\n");
	fscanf(ptf, "%u", &walks);
	pts->walks += walks;
//	printf("Access the rpis.\n");
	fscanf(ptf, "%u", &rpis);
	pts->rpis += rpis;
//	printf("Calculate the average of bats.\n");
//	There is a bug, I will find it.
//	I have found it. In this case, when it read from the file, i forgot to let it omit a space,
//	and ensue the content in the file was overlooked by this program, because of my design.
	pts->bat_aver = (float)((float)pts->hits / (float)pts->bats);			//	we should cast a integer to float
//	printf("%f\n", pts->bat_aver);
//	printf("Done!\n");
}
