/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年10月23日
*/
/*	count_print.c	*/
/*	read input until encountering # to stop. print character and its decimal code	*/
/*	there is a question is that when i enter the 'enter', the program starts without enter '#'	*/
#include <stdio.h>
#define SIZE 8
int main(void)
{
	char ch;
	int count = 0;

	printf("Enter a line and # to quit \n");
	while ((ch = getchar()) != '#')
	{
		if ((count % SIZE) ==0 && count != 0)
			printf("\n");
		else
			printf("%c %d\t", ch, ch);
		count++;
	}
	printf("\n program is over.\n");

	return 0;
}
