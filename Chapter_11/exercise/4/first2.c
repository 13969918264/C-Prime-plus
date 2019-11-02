/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年11月28日
*/
/*	first2.c	*/
#include <stdio.h>
#include <ctype.h>
void first2(char * arr, int n)
{
	int i = 0;

	while ((arr[i] = getchar()) && isspace(arr[i]))
		continue;			//	skip the leading whitespace.
	if (!ispunct(arr[i]))
	{
		while (i++ < n - 1 && (arr[i] = getchar()) && !isspace(arr[i]) && !ispunct(arr[i]))
			continue;
		if (i >= n)
			i--;
		while (getchar() != '\n')				//	in order to keep one line input.
			continue;
	}
	else
	{
		while (getchar() != '\n')
			continue;
		i++;
	}

	arr[i] = '\0';
}
