/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月04日
*/
/*	atoi.c	*/
/*	fail to run	*/
#include <string.h>
#include <ctype.h>

#define MAX 100

int atoi_s(char *);

int main(void)
{
	char str[MAX];
	int i;

	puts("Enter as you like, it will change character to integer.");
	for (i = 0; i < MAX && (str[i] = getchar()) != '\n'; i++)
		continue;
	if (str[i] == '\n')
		str[i] = '\0';
	else
		while (getchar() != '\n')
			continue;
	str[MAX - 1] = '\0';
	puts("You entered");
	puts(str);
	atoi(str);
	puts("Now, it is:");
	puts(str);

	return 0;
}



int atoi_s(char * st)
{
	int flag = 1;
	int i = 0;

	while (*(st + i))
	{
		if (isdigit(*(st + i)))
			continue;
		else
		{
			flag = 0;
			atoi(*(st + i));
		}
		i++;
	}

	return flag;
}
