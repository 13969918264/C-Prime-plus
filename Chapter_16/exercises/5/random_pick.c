/*
    赵子豪@20200407
*/
/*  random_pick.c -- 从大小为m的数组中随机取n个整数   */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

void random_pick(int [], int, int);
void show(int *, int);
void init(int *, int);

int main(void)
{
    int n;
    int arr[SIZE];

    init(arr, SIZE);
    puts("数组元素：");
    show(arr, SIZE);
    puts("\n输入一个你想要的整数（小于100）：非数字退出程序");
    while(scanf("%d", &n) == 1)
    {
        random_pick(arr, SIZE, n);
        puts("\n输入下一个你想要的整数（小于100）：非数字退出程序");
    }
    
    return 0;
}

void init(int arr[], int k)
{
    int i;

    for (i = 0; i < k; i++)
        arr[i] = i + 1;
}

void show(int * p, int t)
{
    int i;

    for(i = 0; i < t; i++)
    {
        if ( (i != 0) && (i %10 == 0) )
            putchar('\n');
        printf("%d\t", *(p+i) );
    }
}

void random_pick(int * p, int m, int n)
{
    int i;
    int index[SIZE];
 
    srand( (unsigned int) time(0) );
    for (i = 0; i < n; i++)
    {
        index[i] = rand() % m;
        printf("第%d个： %d\n", i + 1, *(p + index[i]) );
    }
}