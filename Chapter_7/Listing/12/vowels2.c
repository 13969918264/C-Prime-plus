/*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年10月22日
*/
//  vowels.c -- uses multiple labels
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;
    int a_ct, e_ct, i_ct, o_ct, u_ct;

    a_ct = e_ct = i_ct = o_ct = u_ct = 0;

    printf("Enter some text; enter # to quit.\n");
    while ((ch = getchar()) != '#')
    {
        switch (toupper(ch))
        {

            case 'A' :
                a_ct++;
                break;
            case 'E' :
                e_ct++;
                break;
            case 'I' :
                i_ct++;
                break;
            case 'O' :
                o_ct++;
                break;
            case 'U' :
                u_ct++;
                break;
            default :
                break;
        }           //  end of switch
    }           //  while loop end
    printf("number of vowels:   A       E       I       O       U\n");
    printf("                 %4d     %4d     %4d     %4d     %4d\n", a_ct, e_ct, i_ct, o_ct, u_ct);

    return 0;
}
