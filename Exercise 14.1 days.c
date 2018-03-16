/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2018年3月15日
*/
/*	days.c -- given the month number and calculate the days up the the month(besides it)	*/
#include <stdio.h>
#include <string.h>

#define MAXMONTH 12
#define NAMESIZE 15
#define ABBRE 4


struct month {
	char name[NAMESIZE];
	char abbre[ABBRE];			//	a three-letter abbreviation
	unsigned days;
	unsigned number;
};

struct month monthInfo[MAXMONTH] = {
	{
		"Janurary",
		"Jan",
		31,
		1
	},
	{
		"February",
		"Feb",
		28,
		2
	},
	{
		"March",
		"Mar",
		31,
		3
	},
	{
		"April",
		"Apr",
		30,
		4
	},
	{
		"May",
		"May",
		31,
		5
	},
	{
		"June",
		"Jun",
		30,
		6
	},
	{
		"July",
		"Jul",
		31,
		7
	},
	{
		"August",
		"Aug",
		31,
		8
	},
	{
		"September",
		"Sep",
		30,
		9
	},
	{
		"Octomber",
		"Oct",
		31,
		10
	},
	{
		"November",
		"Nov",
		30,
		11
	},
	{
		"December",
		"Dec",
		31,
		12
	}
};

char * s_gets(char *, int);

int main(void)
{
	char name[NAMESIZE];
	int sum_days = 0;
	int index = 0;

	printf("Please enter the spelled-out name of a month.\n");
	while (s_gets(name, NAMESIZE) != NULL && name[0] != '\0')
	{
		puts(name);
		while (index < MAXMONTH)
			if (strcmp(name, monthInfo[index++].name) == 0)
				break;
		if (index == MAXMONTH)
		{
			printf("Enter the correct name.\n");
			continue;
		}
		printf("%d\n", index);			//	test
		printf("up to %s is %d days.\n", name, sum_days);
		printf("the next month name? newline to quit\n");
	}

	return 0;
}



char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return ret_val;
}
