/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月18日
*/
// pe12-8.c
#include <stdio.h>

int * make_array(int elem, int val);
void show_array(const int arr[], int n);

int main(void)
{
	int * pa;
	int size;
	int value;

	printf("Enter the number of elements: ");
	while (scanf("%d", &size) == 1 && size > 0)
	{
		printf("Enter the initialization value: ");
		scanf("%d", &value);
		pa = make_array(size, value);
		if (pa)
		{
			show_array(pa, size);
			free(pa);
		}
		printf("Enter the number of elements (<1 to quit):");
	}
	printf("Done.\n");

	return 0;
}



int * make_array(int elem, int val)
{
	int * pt;
	int i;

	pt = (int *) malloc(elem * sizeof(int));
	for (i = 0; i < elem; i++)
		pt[i] = val;

	return pt;
}



void show_array(const int arr[], int n)
{
	const int N = 8;
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0 && (i % N) == 0)
			printf("\n%d\t", arr[i]);
		else
			printf("%d\t", arr[i]);
	}
	printf("\n");
}
