/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年12月05日
*/
/*	echo2.c	*/
#include <string.h>
char * upper(char *);
char * lower(char *);
void echo2(char * st1, char * st2)
{
	if (!strcmp(st2, "-p") || !*st2)
		puts(st1);
	else if (!strcmp(st2, "-u"))
		puts(upper(st1));
	else if (!strcmp(st2, "-l"))
		puts(lower(st1));
	else
		puts("Enter the right command-line arguments");
}



char * upper(char * st)
{
	int i = 0;

	while (i < strlen(st))
	{
		if (isupper(st[i]))
			continue;
		else
			st[i] = st[i] - 30;
		i++;
	}

	return st;
}



char * lower(char * st)
{
	int i = 0;

	while (i < strlen(st))
	{
		if (isupper(st[i]))
			continue;
		else
			st[i] = st[i] + 30;
		i++;
	}

	return st;
}
