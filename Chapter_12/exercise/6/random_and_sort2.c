/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月16日
*/
/*	random_and_sort2.c -- generate 1000 pseudonumber range 1 - 10 by calling the standard library and sort it	*/
#include <stdio.h>
#include <math.h>

#define MAX 1000
#define MOD 10
#define PLUS 1

void print(int *, int);
void sort(int *, int);

int main(void)
{
	int i;
	int random;
	unsigned seed;


	printf("Please enter your choice for seed.\n");
	while (scanf("%d", &seed) == 1)
	{

		int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;
		int count6 = 0, count7 = 0, count8 = 0, count9 = 0, count10 = 0;

		srand(seed);			/*	reset seed	*/
		for (i = 0; i < MAX; i++)
		{
			random = rand() % MOD + PLUS;
			switch(random)
			{
				case 1 :
					count1++;
					break;
				case 2 :
					count2++;
					break;
				case 3 :
					count3++;
					break;
				case 4 :
					count4++;
					break;
				case 5 :
					count5++;
					break;
				case 6 :
					count6++;
					break;
				case 7 :
					count7++;
					break;
				case 8 :
					count8++;
					break;
				case 9 :
					count9++;
					break;
				case 10 :
					count10++;
					break;
			}
		}
	//	if count uninitialized, it will overflow.
		printf("the times of 1 is %d\n", count1);
		printf("the times of 2 is %d\n", count2);
		printf("the times of 3 is %d\n", count3);
		printf("the times of 4 is %d\n", count4);
		printf("the times of 5 is %d\n", count5);
		printf("the times of 6 is %d\n", count6);
		printf("the times of 7 is %d\n", count7);
		printf("the times of 8 is %d\n", count8);
		printf("the times of 9 is %d\n", count9);
		printf("the times of 10 is %d\n", count10);
		printf("sum is %d.\n",
				count1 +count2 + count3 + count4 + count5
				+ count6 + count7 + count8 + count9 + count10);
		printf("Please enter next seed (q to quit):\n");
	}

	return 0;
}
