#include <stdio.h>

/* 入力を出力に複写：第２版 */
/* EOFはCtrl+dで入力 */
int main()
{
    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
    }

    return 0;
}
