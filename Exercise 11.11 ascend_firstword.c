/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月04日
*/
/*	ascend_firstword.c	*/
int length_firstsize(char *)
void ascend_firstword(char * st[], int num)
{
	int i, j;
	char * pt;
	for (i = 0; i < num - 2; i++)
		for (j = 0; j < num - 1; j++)
			if (length_firstsize(st[i]) >  length_firstsize(st[j]))
			{
				pt = st[i];
				st[i] = st[j];
				st[j] = pt;
			}
}

int length_firstsize(char * st)
{
	int count = 0;
	int i = 0;

	while (st[i++] != ' ')
		count++;

	return 0;
}
