/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年11月29日
*/
/*	search.c -- search a alphabet in string	*/
char * search(const char * st, int n)
{
	int * first = NULL;

	while (*st != '\0' && *st++ == n)
		first = --st;

	return first;
}
