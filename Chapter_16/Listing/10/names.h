/*
    赵子豪@20200118
*/
/*  names.h --reviesed with inlcude protection  */

#ifndef NAMES_H_
#define NAMES_H_

/*  constants   */
#define SLEN 32

/*  structure declarations  */
struct names_st
{
    char first[SLEN];
    char last[SLEN];
};

/*  typedefs    */
typedef struct names_st names;

/*  function prototype  */
void get_names(names *);
void show_names(const names *);
char * s_gets(char * st, int n);

#endif
