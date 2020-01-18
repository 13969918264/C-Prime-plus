/*
    赵子豪@20200118
*/

/*  doubinclu.c -- inclue header twice   */
#include <stdio.h>
#include "names.h"
#include "names.h"

int main(void)
{
    names winner = {"less", "Ismoor"};
    
    printf("The winner is %s %s\n", winner.first, winner.last);

    return 0;
}