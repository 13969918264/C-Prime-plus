/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2018年1月20日
*/
/*	names3.c -- use pointers and malloc()	*/
#include <stdio.h>
#include <string.h>			//	for strcopy(), strlen()
#include <stdlib.h>			//	for malloc(), free()

#define SLEN 81

struct namect {
	char * fname;			//	using pointers
	char * lname;
	int letters;
};

void getinfo(struct namect *);			//	allocate memory
void makeinfo(struct namect *);
void showinfo(const struct namect *);
void cleanup(struct namect *);			//	free memory when done
char * s_gets(char * st, int n);

int main(void)
{
	struct namect person;

	getinfo(&person);
	makeinfo(&person);
	showinfo(&person);
	cleanup(&person);

	return 0;
}

void getinfo(struct namect * pst)
{
	char temp[SLEN];
	printf("Please enter your first name.\n");
	s_gets(temp, SLEN);
	//	allocate memoty to hold name
	pst->fname = (char *) malloc(strlen(temp) + 1);			//	like a array
	//	copy name to allocated memory
	strcpy(pst->fname, temp);
	printf("Please enter your last name.\n");
	s_gets(temp, SLEN);
	pst->lname = (char *) malloc(strlen(temp) + 1);
	strcpy(pst->lname, temp);
}

void makeinfo (struct namect * pst)
{
	pst->letters = strlen(pst->fname) + strlen(pst->lname);
}

void showinfo(const struct namect * pst)
{
	printf("%s %s, your name contains %d letters.\n", pst->fname, pst->lname, pst->letters);
}

void cleanup(struct namect * pst)
{
	free(pst->fname);
	free(pst->lname);
}

char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;

	if (ret_val = fgets(st, n, stdin))
		if (find = strchr(st, '\n'))
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;

	return ret_val;
}
