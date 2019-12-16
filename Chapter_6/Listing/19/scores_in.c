/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年10月11日
*/
//	scores_in.c -- uses loops for array processing
#include <stdio.h>
#define SIZE 10
#define PAR 72
int main(void)
{
	int index, score[SIZE];
	int sum;
	float average;

	printf("Enter %d golf scoress:\n", SIZE);
	for (index = 0; index < SIZE; index++)
		scanf("%d", &score[index]);			//	read in the ten scores
	printf("The scores read in are as follows:\n");
	for (index = 0; index < SIZE; index++)
		printf("%5d", score[index]);			//	verify input
	printf("\n");
	for (index = 0; index < SIZE; index++)
		sum += score[index];			//	add them up
	average = (float)sum / SIZE;			//	time-honored method
	printf("Sum of scores = %d, average = %.2f\n", sum, average);
	printf("That's a handicap of %.0f.\n", average - PAR);

	return 0;
}
