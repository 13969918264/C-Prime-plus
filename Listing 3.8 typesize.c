/*
	Name: 赵子豪
	Date: 2017年6月13号
*/



/*	typesizes.c	-- prints out type sizes	*/
#include <stdio.h>
int main(void)
{
	/*	c99 provides a %zd specifier for sizes	*/
	/*	in windows, we should use %d specifier and so on but except %zd, it will display without changes like a word	*/
	printf("Type int has a size of %u bytes.\n", sizeof(int));
	printf("Type char has a size of %lu bytes.\n", sizeof(char));
	printf("Type long has a size of %d bytes.\n", sizeof(long));
	printf("Type long long has a size of %d bytes.\n", sizeof(long long));
	printf("Type double has a size of %d bytes.\n", sizeof(long long));
	printf("Type long double has a size of %d bytes.\n", sizeof(long double));

	return 0;
}
