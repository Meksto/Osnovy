#include <stdio.h>
#include <stdlib.h>
#define K 2
#define N 3
int main(void)
{
    int x[K][N];
    int min;
    int max;
    int i;
    int j;
    min=-1;
    max=0;

        for( i = 0; i < K; i++ )
        {
            for( j = 0; j < N; j++ )
            {
                scanf("%d", &x[i][j]);
            }
        }

            for( i = 0; i < K; i++ )
        {
            for( j = 0; j < N; j++ )
            {
                if (x[i][j] >= max)
                {
                    max=x[i][j];
                }
                else if (x[i][j] <= min)
                {
                    min=x[i][j];
                }
            }
        }
            for( i = 0; i < K; i++ )
        {
            for( j = 0; j < N; j++ )
            {
                if (x[i][j] >= 0)
                {
                    x[i][j]=max;
                }
                else
                {
                    x[i][j]=min;
                }
            }
        }
        printf("\n");
        for( i = 0; i < K; i++ )
        {
            for( j = 0; j < N; j++ )
            {
            printf("%4d ", x[i][j]);
            }
        printf("\n");
        }
return 0;
}
