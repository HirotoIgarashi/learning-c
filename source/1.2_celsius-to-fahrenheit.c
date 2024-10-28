#include <stdio.h>

/* f=0, 20, ..., 300に対して、摂氏-華氏対応表を印字する */
int main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;   /* 温度表の下限 */
    upper = 300; /* 上限 */
    step = 20;   /* きざみ */

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}
