/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2018年3月25日
*/
/*	person2.c -- create a struct to restore information of mankind	*/
//	print the array of structures by using a fuction with struct pointer
#include <stdio.h>

#define MAXSIZE 5			//	array size
#define MAXDIGIT 19			//	for security number
#define NAMESIZE 41			//	for name

struct name {
	char first[NAMESIZE];
	char middle[NAMESIZE];
	char last[NAMESIZE];
};

struct person {
	char security_number[MAXDIGIT];
	struct name who;
};

void print_str(struct person *, int);

int main(void)
{
	struct person people[MAXSIZE] = {
		{	"2015072050",
			{	"Hao",
				"Zi",
				"Zhao"
			}
		},
		{	"19951203",
			{	"Ting",
				"Ting",
				"Li"
			}
		},
		{	"19960704",
			{	"Jing",
				"Wen",
				"Li"
			}
		},
		{	"20170702",
			{	"sister",
				"",
				"senior"
			}
		},
		{	"20180324",
			{	"two",
				"Senior mates",
				"Long leg and beautiful face"
			}
		}
	};

	printf("Now, It will print the array of structures to screen.\n");
	print_str(&people[0], MAXSIZE);
	printf("Done.\n");

	return 0;
}



void print_str(struct person * str, int n)
{
	int index = 0;

	for (index; index < n; index++)
		printf("%s %s %c. -- %s\n", (str + index)->who.first, (str + index)->who.last, (str + index)->who.middle[0], (str + index)->security_number);
}
