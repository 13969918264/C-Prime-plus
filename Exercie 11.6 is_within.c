/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年11月29日
*/
/*	is_within.c	-- decide if a character is within a string	*/
bool is_within(char * st, char ch)
{
	bool flag = false;

	while (*st && *st++ == ch)
		flag = true;

	return flag;
}
