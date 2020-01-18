/*  
    赵子豪@20200118
*/

/*  predef.c -- preddefined identifiers */
#include <stdio.h>

void why_me();

int main()
{
    printf("The file is %s.\n", __FILE__);
    printf("The file is %s.\n", __DATE__);
    printf("The file is %s.\n", __TIME__);
    printf("The file is %ld.\n", __STDC_VERSION__);
    printf("The file is %d.\n", __LINE__);
    printf("The fucntion is %s.\n", __func__);    //  c99 c11
    why_me();

    return 0;
}

void why_me()
{
    printf("This function in %s\n", __func__);    //  c99 c11
    printf("This is line %d.\n", __LINE__);
}