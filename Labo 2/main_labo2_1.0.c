#include <stdio.h>
#include <conio.h>
long int factorial(long int z)
{
    if (z == 0 || z == 1) return 1;
    return z * factorial(z - 1);
}

int main(void)
{
float s;// ����� ����
int n; // ����� ��������� ����
int sign;
int i; // ����� ���������� �������� ����
float a; // ��������� ������� ����
float c; // ��������� ���������� �������� ����
float b; // ����������� ���������� �������� ����
float x; // ������� �������� ����
float v;

    // ���� ���������� ����
    printf("n=");
    scanf("%d", &n);
    printf("x=");
    scanf("%f", &x);

        v=1;
        s = 0;
        sign = 1;
        i = 0;
        c = x;


// ����
while( i < n )
{
 b = factorial (v);
 a = (c) / (b);
 s = s + a*sign;
 sign = -sign;
 i = i + 1;
 c=c*x*x;
 v=v+2;
 }

 // ����� ����������
printf("s = %f\n", s);


return 0;
}
