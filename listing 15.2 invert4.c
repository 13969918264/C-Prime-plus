/* invert.c -- using  bit operations to display  binary */
#include <stdio.h>
#include <limits.h>
char * itobs(int, char *);
void show_bstr(const char *);
int invert_end(int num, int bits);

int main(void)
{
    char bin_str(CHAR_BIT * SIZEOF(INT) + 1);

    int number;
    puts("Enter integers see them in binary.");
    puts("Non_numberic input terminates program.");
    while (scanf("%d", &number ) == 1)
    {
        itobs(number, bin_str);
        printf("%d is \n", number);
        show_bstr(bin_str);
        putchar('\n');
        number = invert_end(number, 4);
        printf("Inverting the last 4 bits gives \n");
        show_bstr(itobs(number,bin_str));
        putchar('\n');
    }
    puts("Bye!");

    return 0;
}

char * itobs(int n, char * ps)
{
    int i;
    const static int size  = CHAR_BIT * sizeof(int);

    for (i = size - 1; i >= 0; i--, n>>=1)
        ps[i] = (01 & n) + '0';
    ps[size] = '\n';

    return ps;
}
