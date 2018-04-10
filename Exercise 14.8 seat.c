/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2018年4月10日
*/
/*	seat.c -- the information of a plane	*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define NAMESIZE 21
#define MAXSIZE 12

struct seat {
	int id;
	int marker;
	char last[NAMESIZE];
	char first[NAMESIZE];
};

void menu(void);			//	show the choice
char * s_gets(char *, int);
void number_empty(struct seat *, int);			//	show number of empty seats
void list_empty(struct seat *, int);			//	show list of empty seats
void alpha_list(struct seat *, int);			//	show alphabetical list of seats
void assign_seat(struct seat *, int);			//	assign a customer to a assignment
void delete_seat(struct seat * int);			//	delete a seat assignment

int main(void)
{
	struct seat customer[MAXSIZE] = {
		{
			.id = 1,
			.marker = 0
		},
		{
			.id = 2,
			.marker = 0
		},
		{
			.id = 3,
			.marker = 0
		},
		{
			.id = 4,
			.marker = 0
		},
		{
			.id = 5,
			.marker = 0
		},
		{
			.id = 6,
			.marker = 0
		},
		{
			.id = 7,
			.marker
		},
		{
			.id = 8,
			.marker = 0
		},
		{
			.id = 9,
			.marker = 0
		},
		{
			.id = 10,
			.marker = 0
		},
		{
			.id = 11,
			.marker = 0
		},
		{
			.id = 12,
			.marker = 0
		}
	};
	int label;

	menu();
	while (scanf("%c", &label) && label != 'f')
	{
		switch(label)
		{
			case 'a' :
				number_empty(&customer[0], MAXSIZE);
				break;
			case 'b' :
				list_empty(&customer[0], MAXSIZE);
				break;
			case 'c' :
				alpha_list(&customer[0], MAXSIZE);
				break;
			case 'd' :
				assign_seat(&customer[0], MAXSIZE);
				break;
			case 'e' :
				delete_seat(&customer[0], MAXSIZE);
				break;
		};
		menu();
	}
	puts("Done!");

	return 0;
}
