/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年11月29日
*/
/*	is_within.c	-- decide if a character is within a string	*/
int is_within(char * st, char ch)
{
	int flag = 0;

	while (*st && *st++ != ch)
		continue;
	if (*--st == ch)
		flag = 1;

	return flag;
}
