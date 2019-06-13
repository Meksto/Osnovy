#include <stdio.h>
int main(void)
{
    unsigned long num=0,N;
    int dec, v;
    scanf("%lu", &N);
    dec = N;
     v = 128;
     for(int i = 1; i <= 8; i++)
     {
             if(dec >= v)
             {
                    printf("1");
                    dec -= v;
             }
             else
                 printf("0");

             v /= 2;
     }

    while(N)
    {
        num^=(N&3);
        N=N>>2;
        num=num<<2;
    }
    num=num>>2;
    printf("\n%lu\n", num);
        dec = num;
     v = 128;
     for(int i = 1; i <= 8; i++)
     {
             if(dec >= v)
             {
                    printf("1");
                    dec -= v;
             }
             else
                 printf("0");

             v /= 2;
     }
    return 0;
}
