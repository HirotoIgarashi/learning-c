#include <stdio.h>

/* 入力の行数をカウント */
/* EOFはCtrl+dで入力 */
int main()
{
    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
    printf("%d\n", nl); 

    return 0;
}
