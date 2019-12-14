/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月17日
*/
/*  p_and_s.c -- pointers and string    */
#include <stdio.h>
int main(void)
{
    const char * mesg = "Don't be a fool!";
    const char * copy;

    copy = mesg;
    printf("%s\n", copy);           //  when it print a string, the parameter should be a pointer. differed with other.
    printf("mesg = %s; &mesg = %p; value = %p\n", mesg, &mesg, mesg);
    printf("copy = %s, &copy = %p; value = %p\n", copy, &copy, copy);

    return 0;
}
