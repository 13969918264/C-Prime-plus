/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年11月17日
*/
//  arrchar.c -- array of pointers, array of strings
#include <stdio.h>
#define SLEN 40
#define LIN 5
int main(void)
{
    const char * mytalents[LIN] =
    {
        "Adding numbers swiftly",
        "Multiplying accurately",
        "Stashing data",
        "Following instructions to the letter",
        "Understanding the C language"
    };
    char yourtalents[LIN][SLEN] =
    {
        "Walking in a straight line",
        "Sleeping",
        "Watching television",
        "Mailing letters",
        "Reading email"
    };
    int i;

    puts("Let's compare talents.");
    printf("%-36s %-25s\n", "My Talents", "Your Talents");
    for (i = 0; i < LIN; i++)
        printf("%-36s %-25s\n", mytalents[i], yourtalents[i]);
    printf("\nsizeof mytalents: %zd, sizeof yourtalents: %zd\n", sizeof(mytalents), sizeof(yourtalents));

    return 0;
}
