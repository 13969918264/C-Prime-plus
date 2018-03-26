/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2018年3月26日
*/
/*	student.c -- The information of students	*/
#include <stdio.h>

#define NAMESIZE 31
#define GRADESIZE 3
#define CSIZE 4

struct name {
	char first[NAMESIZE];
	char last[NAMESIZE];
};

struct student {
	struct name who;
	float grade[GRADESIZE];
	float aver_grade;
};

void request(struct student *);			//	prompting the user with a student name and a request for scores
void calculate_aver(struct student (*) [], int);			//	calculate the average of scores and assign it to the proper member
void print_info(struct student (*) [], int);			//	print the  information in each structure
void print_aver_grade(struct student (*) [], int);			//	print the class average grade

int main(void)
{
	int index = 0;

	struct student stu[CSIZE] = {
		{
			{
				"ZiHao",
				"Zhao"
			}
		},
		{
			{
				"TingTing",
				"Li"
			}
		},
		{
			{
				"WenJing",
				"Li"
			}
		},
		{
			{
				"senior sister",
				"tailed hair girl"
			}
		}
	};

	while (index < CSIZE)
	{
		request(&stu[index]);
		index++;
	}
	calculate_aver(stu, CSIZE);
	print_info(stu, CSIZE);
	print_aver_grade(stu, CSIZE);
	printf("done.\n");

	return 0;
}

void request(struct student * st)
{
	int i = 0;

	printf("%s %s\n", st->who.first, st->who.last);
	printf("Enter the first grade.\n");
	while (scanf("%f", st->grade[i]) != 1)
		continue;
	while (getchar() != '\n')
			continue;
	i++;
	printf("Enter the second grade.\n");
	while (scanf("%f", st->grade[i]) != 1)
		continue;
	while (getchar() != '\n')
			continue;
	i++;
	printf("Enter the third grade.\n");
	while (scanf("%f", st->grade[i]) != 1)
		continue;
	while (getchar() != '\n')
			continue;
}



void calculate(struct student (* st) [], int m)
{
	int i = 0;

	while (i < m)
		(*st)[i].aver_grade = ((*st)[i].grade[0] + (*st)[i].grade[1] + (*st)[i].grade[2]) / 3;
}



void print_info(struct student (* st) [], int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%s %s:\n", (*st)[i].who.first, (*st)[i].who.last);
		printf("Your scores are %6.3f\t%6.3f\t%6.3f\n", (*st)[i].grade[0], (*st)[i].grade[1], (*st)[i].grade[2]);
		printf("Your average grade is %6.3f\n", (*st)[i].aver_grade);
		i++;
	}
}



void print_aver_grade(struct student (* st)[], int n)
{
	int i = 0;
	float class_aver_grade = 0;

	while (i < n)
		class_aver_grade += (*st)[i++].aver_grade;
	printf("%6.3f\n", class_aver_grade);
}
