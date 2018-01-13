/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2018年1月13日
*/
/*	friends.c -- uses pointer to a sturcture	*/
#include <stdio.h>

#define LEN 20

struct names {
	char first[LEN];
	char last[LEN];
};

struct guy {
	struct names handle;
	char favfood[LEN];
	char job[LEN];
	float income;
};

int main(void)
{
	struct guy fellow[2] = {
		{{"Even", "Villard"},
		 "grilled salmon",
		 "personality coach",
		 68112.00
		},
		{{"Rodney", "Swillbelly"},
		 "tripe",
		 "tabloid editor",
		 232400.00
		}
	};

	struct guy * him;			/*	here is a pointer to a sttuctures	*/

	printf("address #1: %p #2: %p\n", &fellow[0], &fellow[1]);
	him = &fellow[0];			/*	tell the pointer where to point	*/
	printf("pointer #1: %p #2; %p\n", him, him + 1);
	printf("him -> incomde is $%.2f: (*him).income is $%.2f\n", him -> income, (*him).income);
	him++;			/*	point to the next structure	*/
	printf("him -> favfood is %s:  him -> handdle.last is %s\n", him -> favfood, him -> handle.last);

	return 0;
}
