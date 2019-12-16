/*
	姓名：赵子豪
	日期：2019年9月16日
*/
//	names_st.h -- names_st structures header file
//	constants
#include <stdio.h>

#define SLEN 32

//	structure declaration
struct names_st
{
	char first[SLEN];
	char last[SLEN];
};

// typedefs

typedef struct names_st names;

//	function prototype
void get_names(names *);
void show_names(names *);
char * s_gets(char * st, int n);
