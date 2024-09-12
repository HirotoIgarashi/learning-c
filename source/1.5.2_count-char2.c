#include <stdio.h>

/* 入力される文字カウント：第２版 */
/* EOFはCtrl+dで入力 */
int main()
{
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
        ;
        
    printf("%.0f\n", nc);

    return 0;
}
