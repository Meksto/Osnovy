#include <locale.h>
#include <stdio.h>
#define N 10
int main(void)
{
    setlocale(LC_ALL, "Rus");
    int x [N];
    int ch; //чётное
    int nc; //нечётн
    int i;
    ch=0;
    nc=0;
    for( i = 0; i < N; i++ )
    scanf("%d", &x[i]);
    for( i = 0; i < N; i++ )
        {
            if (x[i] % 2 == 0)
                ch=ch+x[i];
            else
                nc=nc+x[i];
        }
    if (ch>nc)
        printf("наибольшая сумма состоит из чётных чисел %d \n", ch);
    else
        printf("наибольшая сумма состоит из нечётных чисел %d \n", nc);
return 0;
}
