/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年11月28日
*/
/*	first2.c -- rewrite first.c in programming exercise 3	*/
void first2(char * arr, int n)
{
	int i = 0;

	while (i < n)
	{
		if ((*arr = getchar()) != ' ' && *arr != '\n' && *arr > 'A' && *arr < 'z')
			arr++;
		else
		{
			*arr = null;
			break;
		}
		while (getchar() != '\n')
			continue;
	}

}
