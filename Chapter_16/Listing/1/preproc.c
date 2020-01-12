/*
	姓名：赵子豪
	日期：2019年7月17日
*/
/*	preproc.c -- simple preprocessor example	*/

#include <stdio.h>

#define TWO 2			/*	you can use comments if you like	*/
#define OW "Consisteny is the last refusing of the unimagina\
tive. -- Oscar Wilde"	/*	a backslash continue a definition to the next line	*/
#define FOUR  TWO*TWO
#define PX printf("X is %d.\n", x)
#define FMT "x is %d.\n"

int main(void)
{
	int x = TWO;

	PX;
	x = FOUR;
	printf(FMT, x);
	printf("%s\n", OW);
	printf("TWO: OW\n");

	return 0;
}
