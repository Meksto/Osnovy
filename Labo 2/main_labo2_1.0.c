#include <stdio.h>
#include <conio.h>
long int factorial(long int z)
{
    if (z == 0 || z == 1) return 1;
    return z * factorial(z - 1);
}

int main(void)
{
float s;// сумма ряда
int n; // число элементов ряда
int sign;
int i; // номер очередного элемента ряда
float a; // очередной элемент ряда
float c; // числитель очередного элемента ряда
float b; // знаменатель очередного элемента ряда
float x; // входной параметр ряда
float v;

    // ввод параметров ряда
    printf("n=");
    scanf("%d", &n);
    printf("x=");
    scanf("%f", &x);

        v=1;
        s = 0;
        sign = 1;
        i = 0;
        c = x;


// цикл
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

 // вывод результата
printf("s = %f\n", s);


return 0;
}
