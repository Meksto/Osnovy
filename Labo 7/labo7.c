#include <stdio.h>
int main(void)
{
    unsigned long num=0,N;
    scanf("%lu", &N);
    while(N)
    {
        num^=(N&3);
        N=N>>2;
        num=num<<2;
    }
    num=num>>2;
    printf("%lu", num);
    return 0;
}
