/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月16日
*/
/*	random_and_sort.c -- generate 100 pseudonumber range 1 - 10 by calling the standard library and sort it	*/
#include <stdio.h>
#include <math.h>

#define MAX 100
#define MOD 10
#define PLUS 1
void print(int *, int);
void sort(int *, int);

int main(void)
{
	int i;
	int arr[MAX];

	for (i = 0; i < MAX; i++)
		arr[i] = rand() % MOD + PLUS;
	print(arr, MAX);
	sort(arr, MAX);
	print(arr, MAX);

	return 0;
}



void sort(int * arr, int n)
{
	int i, j, temp;

	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			else
				continue;
}



void print(int * arr, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
