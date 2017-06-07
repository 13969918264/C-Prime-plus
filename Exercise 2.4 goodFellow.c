/*
	Name: 赵子豪
	Date: 2017年6月7号
*/



/*	goodFellow.c	--	print 4 statements	*/
/*
#include <stdio.h>
int main(void)
{
	printf("He is a jolly good fellow!\n");
	printf("He is a jolly good fellow!\n");
	printf("He is a jolly good fellow!\n");
	printf("Which nobody can deny!\n ");

	return 0;

}
*/

// use for loop print statement
#include <stdio.h>
int main(void)
{
	int i;

	for(i=0; i <3; i++)
	{
		printf("He is a jolly good fellow!\n");
	}

	printf("Which nobody can deny!\n");

	return 0;
}
