/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年10月23日
*/
/*	count_print.c	*/
/*	read input until encountering # to stop. print character and its decimal code	*/
/*	there is a question is that when i enter the 'enter', the program starts without enter '#'	*/
//	update: now i know the reason.
#include <stdio.h>
#define SIZE 8
#define MAX 250
int main(void)
{
	int count = 0;
	int index = 0;
	char array[MAX];
	char ch;

	printf("Enter a line and # to quit \n");
	while ((ch = getchar()) != '#')
	{
	//	while语句中不能同时输出，否则不能换行输入，换行键立即执行。
		if (ch == '\n')
			continue;
		else
			array[index++] = ch;
	}
	for ( ; count < index; count++)
	{
		if ((count % SIZE) ==0 && count != 0)
			printf("\n");
		printf("%c %d\t", array[count], array[count]);			//	不能用else包括，否则每行只能输出7个
	}
	printf("\nprogram is over.\n");

	return 0;
}
