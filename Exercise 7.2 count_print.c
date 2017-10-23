/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年10月23日
*/
/*	count_print.c	*/
/*	read input until encountering # to stop. print character and its decimal code	*/
/*	there is a question is that when i enter the 'enter', the program starts without enter '#'	*/
#include <stdio.h>
#define SIZE 8
#define MAX 250
int main(void)
{
	char ch;
	int count = 0;
	int index = 0;
	char array[MAX];

	printf("Enter a line and # to quit \n");
	while ((array[index++] = getchar()) != '#')
		continue;
	for ( ; count <= index; count++)
	{
		if ((count % SIZE) ==0 && count != 0)
			printf("\n");
		printf("%c %d\t", array[count], array[count]);
	}
	printf("\n program is over.\n");

	return 0;
}
