/*
    赵子豪@20200331
*/

/*  harmonic_mean.c --两数倒数之和的平均数的倒数*/ 
//  输入的内容要和scanf格式保持一致。格式有逗号，输入同样要有；格式是空格，输入也要是空格。

#include <stdio.h>

#define HARMONIC_MEAN(X, Y) (1 / ( ( (1 / (X) ) + (1 / (Y) ) ) / 2 ) )

int main(void)
{
    double a;
    double b;

    printf("Enter two numbers : 空格隔开 q to quit\n");
    while (scanf("%lf %lf", &a, &b) == 2)
    {
        printf("The harmonic mean of %lf and %lf is %lf\n", a, b, HARMONIC_MEAN(a,b));
        printf("Enter two numbers : 空格隔开 q to quit\n");
    }
    printf("Bye!");

    return 0;
}
