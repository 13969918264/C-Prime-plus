/*
    ���Ӻ�@20200407
*/
/*  random_pick.c -- �Ӵ�СΪm�����������ȡn������   */

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
    puts("����Ԫ�أ�");
    show(arr, SIZE);
    puts("\n����һ������Ҫ��������С��100�����������˳�����");
    while(scanf("%d", &n) == 1)
    {
        random_pick(arr, SIZE, n);
        puts("\n������һ������Ҫ��������С��100�����������˳�����");
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
        printf("��%d���� %d\n", i + 1, *(p + index[i]) );
    }
}