/*
    赵子豪@20200402
*/

/*  clock.c -- 两次处理器调用周期时间   */
#include <stdio.h>
#include <time.h>

void time_out(double);

int main(void)
{
    double time_delay;

    puts("输入一个想要的运行时间：非数字退出程序");
    while (scanf("%lf", &time_delay) == 1)
    {
        puts("test");
        time_out(time_delay);
        puts("输入一个想要的运行时间：非数字退出程序");
    }
    
    
    return 0;
}

void time_out(double n)
{
    double all_time;
    double cycle;
    
    for (all_time = 0, cycle = 0;  all_time < n; all_time += cycle)
    {
        printf("%d\n", CLOCKS_PER_SEC);
        cycle = (double)( (clock() - clock() ) * (-1) ) / (double)CLOCKS_PER_SEC;
        printf("%lf\n", cycle);
        puts("继续");
    }   

    puts("结束");
}