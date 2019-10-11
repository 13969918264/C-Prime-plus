/*
	赵子豪@2019年10月10日11日
*/
/*	binary_to_numeric.c --	converts a binary string to a numeric number	*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

#define MAX 128
#define DIF 48

int bin_to_num(char *);

int main(void)
{
	char arr[MAX];

	printf("Enter a binary string and then return you a numeric number.\n");
	while (scanf("%s", arr) == 1)
	{
		printf("%s\n", arr);
		if (!isdigit(arr[0]))
			break;
		else
			printf("The numeric number is %d\n", bin_to_num(arr));

		printf("Next or alphabet to quit!\n");
	}

	return 0;
}

int bin_to_num(char * str)
{
	int count;
	int output;

	for (count = 0, output = 0; count < strlen(str); count++)
	{
//		printf("%d\t%d\t", strlen(str), *(str + count) - DIF);			//	现在是字符串形式，ASCII中不是数字本身
		output = output + ( ( *(str + count) - DIF  ) * pow(2,strlen(str) - count - 1));
//		printf("%d\n", output);
	}

	return output;
}
