/*
	Name: 赵子豪
	Date: 2017年6月9号
*/



/*	countryName.c	--	define two addtional function to implement 2 print statement	*/
#include <stdio.h>
void br(void);
void ic(void);
int main(void)
{
	br();
	ic();
	printf("India, china,\nBrazil, Russia\n");

	return 0;
}

void br(void)
{
	printf("Brazil, Russia,");
}

void ic(void)
{
	printf(" India, china\n");
}
