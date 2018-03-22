/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2018年3月21日
*/
/*	days2.c -- according to the given information and calculate the total number of days int the year up through the given day	*/
#include <stdio.h>
#include <string.h>

#define MAXMONTH 12
#define DAYS 366
#define LEAP 4
#define LEAPS 100
#define NAMESIZE 15
#define ABBRE 4

char * s_gets(char *, int);

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

int main(void)
{
	unsigned int day;
	unsigned int choice;
	unsigned int year;
	unsigned int days = 0;
	unsigned int month;
	char monthName[NAMESIZE];
	int index = 0;

	printf("Enter a day in a month.\n");
	while (!scanf("%ud", &day))
		printf("Please enter a day.\n");
	while (getchar() != '\n')
		continue;
	printf("Enter a month in a year.it maybe a number or name or abbrevation.\n");
	printf("1) its number			2) its name			3) its abbravation");
	printf("Please enter the number of the choice\n");
	while (!scanf("%u", &choice) && choice > 0 && choice < 4)
		printf("Enter the right number of choice.\n");
	while (getchar() != '\n')
		continue;
	switch (choice)
	{
		case 1 :
				printf("Enter the number of a month.\n");
				while (scanf("%ud", &month) && month > 12)
					printf("Enter the right number (less 13).\n");
				index = month - 1;
				while (getchar() != '\n')
					continue;
				break;
		case 2 :
				printf("Enter the name of a month.\n");
				while (s_gets(monthName, NAMESIZE))
				{
				//	printf("%s\n%s\n", monthName, monthInfo[index].name);
					while (index < MAXMONTH && strcmp(monthName, monthInfo[index].name) != 0)
					{
					//	printf("%s\n%s\n", monthName, monthInfo[index].name);
						index++;
					}
				//	printf("%d\n", index);
					if (index ==  MAXMONTH)
					{
						printf("Enter the right name of a month\n");
						index = 0;
						continue;
					}
					else
						break;
				}
				break;
		case 3 :
				printf("Enter the abbrevation of the month.");
				while (s_gets(monthName, ABBRE))
				{
					while (index < MAXMONTH && strcmp(monthName, monthInfo[index].abbre) != 0)
						index++;
					if (index ==  MAXMONTH)
					{
						printf("Enter the right abbrevation of the name of a month\n");
						index = 0;
						continue;
					}
					else
						break;
				}
				break;
	}
	printf("Enter the year.\n");
	while (!scanf("%u", &year))
		printf("Enter a positive number.\n");
	while (getchar() != '\n')
		continue;
	days = day;
//	printf("%u\n", days);
//	printf("%d\n", index);
	if (index > 1)
	{
		if (year % LEAPS == 0)
			if (year % (LEAP * LEAPS) == 0)
				days++;
		else if (year % LEAP == 0)
			days++;
	}
//	printf("cut\n");
//	printf("%u\n");
	while (index-- > 0)
		days += monthInfo[index].days;

	printf("The days up through the given day is %u.\n", days);

	return 0;
}



char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		if (find = strchr(st, '\n'))
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return ret_val;
}
