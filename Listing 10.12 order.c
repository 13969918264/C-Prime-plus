/*
	Name: 赵子豪(ZiHao Zhao)
ऀ	Date: 2017年11月06日
*/
/*  order.c -- precedence in pointer operation  */
#include <stdio.h>
int data[2] = {100, 200};
int moredata[2] = {300, 400};
int main(void)
{
    int * p1, * p2, * p3;
    p1 = p2 = data;
    p3 = moredata;
    printf("  *p1 = %d,   *p2 = %d,     *p3 = %d\n",
              *p1     ,   *p2     ,     *p3);
    printf("*p1++ = %d, *++p2 = %d, (*p3)++ = %d\n",            //  the third varible assigned first and increment then.
            *p1++     , *++p2     , (*p3)++);           //  the second varible changed before be assigned.
    printf("  *p1 = %d,   *p2 = %d,     *p3 = %d\n",
              *p1     ,   *p2     ,     *p3);
    //  with the first and the third varible of the second printf() statement incremented. so the varibles changed.

    return 0;
}
