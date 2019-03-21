#include <stdio.h>
int main (void)
{
    float pi;
    float r;
    float a;
    float res;
        pi=3.14;
        printf ("Radius= ");
        scanf("%f", &r);
            printf("side of square= ");
            scanf("%f", &a);
                res = (pi*pow(r,2))-pow(a,2);
                printf ("figure area=%f\n", res);
    return 0;

}
