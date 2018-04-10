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
void delete_seat(struct seat *, int);			//	delete a seat assignment
void store(struct seat *, int, FILE *);			//	store the data of the information about seat of the plane

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
			.marker = 0
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
	//	printf("%c", label);
		while (getchar() != '\n')
			continue;			//	clean the entry of next
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
			default  :
				printf("Please enter the right number of choice.\n");
		};
		menu();
	}
	puts("Done!");

	return 0;
}



void menu(void)
{
	printf("a) show number of empty seats               b) show list of empty seats\n");
	printf("c) show alphabetical list of empty seats    d) assignate a customer to a seat assignment.\n");
	printf("e) delete a seat assignment                 f) quit\n");
}



char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;

	if (ret_val = fgets(st, n, stdin))
		if (find = strchr(st, '\n'))
			*find = '\n';
		else
			while (getchar() != '\n')
				continue;

	return ret_val;
}



void number_empty(struct seat * arr, int n)
{
	int i;

	for (i = 0; (arr + i)->marker != 1 && i < n; i++)
		printf("The number %d seat is free.\n", (arr + i)->id);
}



void list_empty(struct seat * arr, int n)
{}



void alpha_list(struct seat * arr, int n)
{}



void assign_seat(struct seat * arr, int n)
{
	int i, number;

	printf("There are the number of empty.\n");
	number_empty(arr, n);
	printf("Which one do you want?\n");
	printf("Enter the number of seat.\n");
	while (scanf("%d", &number) == 1)
	{
		i = number - 1;			//	convert to index of the array of structures
		while (getchar() != '\n')
			continue;
		if ((arr + i)->marker == 1)
		{
			printf("This seat is assigned. enter the right number of empty\n");
			continue;
		}
		else if (number > MAXSIZE || number < 1)
		{
			printf("There is no such number seat.\n");
			continue;
		}
		(arr + i)->marker = 1;
		puts("Enter your first name.");
		s_gets((arr + i)->first, NAMESIZE);
		puts("Now enter your last name.");
		s_gets((arr + i)->last, NAMESIZE);
		puts("reserved completely");
		break;
/*
		printf("Reserve another ticket?\n");
		printf("y means yes and the others means no.\n");
		if (getchar() == 'y')
		{
			printf("There are the number of empty.\n");
			number_empty(arr, n);
			printf("Which one do you want?\n");
			printf("Enter the number of seat.\n");
			continue;
		}
		else
		{
			printf("Buy it\n");
			break;
		}
*/
	}
	printf("What else do you want to do?\n");
}
void delete_seat(struct seat * arr, int n)
{}
