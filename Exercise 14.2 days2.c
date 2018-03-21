/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2018年3月21日
*/
/*	days2.c -- according to the given information and calculate the total number of days int the year up through the given day	*/
#include <stdio.h>
#include <string.h>

#define MONTHS 12
#define DAYS 366
#define LEAP 4
#define LEAPS 100
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

int main(void)
{
	unsigned int day;
	unsigned int choice;
	unsigned int year;
	unsigned int days = 0;
	unsigned int month;
	char * month_pt;			//	used by malloc()
	int index = 0;

	printf("Enter a day in a month.\n");
	while (!scanf("%ud", &day))
		printf("Please enter a day.\n");
	while (getchar() != '\n')
		continue;
	printf("Enter a month in a year.it maybe a number or name or abbrevation.\n");
	printf("1) its number			2) its name			3) its abbravation");
	printf("Please enter the number of the choice\n");
	while (!scanf("%ud", &choice)y && choice > 0 && choice < 4)
		printf("Enter the right number of choice.\n");
	while (getchar() != '\n')
		continue;
	switch (choice)
	{
		case 1 :
				printf("Enter the number of a month.\n");
				while (!scanf("%ud", &month))
					printf("Enter the right number.\n");
				while (getchar() != '\n')
					continue;
				break;
		case 2 :
				printf("Enter the name of a month.\n");
				while (s_gets(month_pt, NAMESIZE))
				{
					while (index < MAXMONTH && strcmp(*month_pt, monthInfo[index].name) != 0)
						index++;
					if (index =  MAXMONTH)
					{
						printf("Enter the right name of a month");
						continue;
					}
				}
				break;
		case 3 :
				printf("Enter the abbrevation of the month.");
				while (s_gets(month_pt, ABBRE))
				{
					while (index < MAXMONTH && strcmp(*month_pt, monthInfo[index].abbre) != 0)
						index++;
					if (index =  MAXMONTH)
					{
						printf("Enter the right abbrevation of the name of a month");
						continue;
					}
				}
				break;
	}
	printf("Enter the year.\n")
	while (!scanf("%ud", &year))
		printf("Enter a positive number.\n");
	while (getchar() != '\n')
		continue;
	days = day;
	while (index-- > 0)
		days += monthInfo[index].days;
	if (years % LEAPS == 0)
		if (years % (LEAP * LEAPS) == 0)
			days++;
	else if (years % LEAP == 0)
		days++;
	printf("The days up through the given day is %ud.\n", days);

	return 0;
}
