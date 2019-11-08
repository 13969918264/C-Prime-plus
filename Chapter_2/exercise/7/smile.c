/*
	Name: 赵子豪
	Date: 2017年6月9号
*/



/*	smile.c	print some "Smile!" by using a function you defined as you needed 	*/
#include <stdio.h>
void smile(void);
int main(void)
{
	int i = 0;

	for(i; i < 3; i++)
	{
		smile();
	}

	printf("\n");
	smile();
	smile();
	printf("\n");
	smile();

	return 0;
}

void smile(void)
{
	printf("Smile!");
}
