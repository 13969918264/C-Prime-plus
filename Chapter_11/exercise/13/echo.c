/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月04日
*/
/*	echo.c -- echo the command-line argumens in reversed word order	*/
int main(int argc, char * argv[])
{
	int i;

	puts("Print the command-line arguments in reversed order.");
	for (i = argc - 1; i > 0; i--)
		puts(argv[i]);

	return 0;
}
