#include <stdio.h>
int main (void)
{
    unsigned long num=0,N;  // unsigned long num, N; num = 0;
    scanf("%lu", &N);       // ��������� � ���������� unsigned long � �������� � N
    while(N)                // while (N != 0)
    {   // ����� ��������� ��������:
        num^=(N&3);         // num = num^(N&3);
        N=N>>2;
        num=num<<2;
    }
    num=num>>2;
    printf("%lu\n", num);   // ������� �� ����� ������������ ����� num
    return 0;               // ����� ���������
}
