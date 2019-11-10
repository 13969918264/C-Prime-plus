 /*
    Name: 赵子豪(ZiHao Zhao)
    Date: 2017年10月14日
*/
/* word.c -- read a single word and print it backward   */
#include <stdio.h>
#include <string.h>
#define SIZE 20
int main(void)
{
    char word[SIZE];
    int index = 0;
    scanf("%c", &word[index]);
    while (word[index++] != ' ')
        scanf("%c", &word[index]);
    index = 0;
    while (index < strlen(word))
        printf("%c", word[index++]);

    return 0;
}
