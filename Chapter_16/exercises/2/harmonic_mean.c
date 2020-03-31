/*
    ���Ӻ�@20200331
*/

/*  harmonic_mean.c --��������֮�͵�ƽ�����ĵ���*/ 
//  ���������Ҫ��scanf��ʽ����һ�¡���ʽ�ж��ţ�����ͬ��Ҫ�У���ʽ�ǿո�����ҲҪ�ǿո�

#include <stdio.h>

#define HARMONIC_MEAN(X, Y) (1 / ( ( (1 / (X) ) + (1 / (Y) ) ) / 2 ) )

int main(void)
{
    double a;
    double b;

    printf("Enter two numbers : �ո���� q to quit\n");
    while (scanf("%lf %lf", &a, &b) == 2)
    {
        printf("The harmonic mean of %lf and %lf is %lf\n", a, b, HARMONIC_MEAN(a,b));
        printf("Enter two numbers : �ո���� q to quit\n");
    }
    printf("Bye!");

    return 0;
}
