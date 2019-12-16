/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年10月21日
*/
/*  break.c -- uses break to exit a loop    */
#include <stdio.h>
int main(void)
{
    float length, width;

    printf("Enter the length of the rectangle:\n");
    scanf("%f", &length);
    while (length > 0)
    {
        printf("length = %f.\n", length);
        printf("Enter the width:\n");
        scanf("%f", &width);
        while (width > 0)
        {
            printf("width = %f.\n", width);
            printf("Area = %f.\n", length * width);
            if (width > 100)
                break;          //  break from inner loop
            scanf("%f", width);
        }
        if (width > 100)
            break;          //  break frome outer loop
        scanf("%f", &width);
    }

    return 0;
}
