#include <locale.h>
#include <stdio.h>
#define N 10
int main(void)
{
    setlocale(LC_ALL, "Rus");
    int x [N];
    int ch; //������
    int nc; //������
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
        printf("���������� ����� ������� �� ������ ����� %d \n", ch);
    else
        printf("���������� ����� ������� �� �������� ����� %d \n", nc);
return 0;
}
