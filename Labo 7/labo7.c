#include <stdio.h>
int main (void)
{
    unsigned long num=0,N;  // unsigned long num, N; num = 0;
    scanf("%lu", &N);       // прочитать с клавиатуры unsigned long и записать в N
    while(N)                // while (N != 0)
    {   // кучка побитовых операций:
        num^=(N&3);         // num = num^(N&3);
        N=N>>2;
        num=num<<2;
    }
    num=num>>2;
    printf("%lu\n", num);   // вывести на экран получившееся число num
    return 0;               // конец программы
}
