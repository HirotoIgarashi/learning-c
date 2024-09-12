#include <stdio.h>

/* 入力される文字カウント：第１版 */
int main()
{
    long nc;

    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);

    return 0;
}
