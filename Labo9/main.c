#include <stdio.h>
#include <locale.h>
#include <conio.h>


void main(void)
{
    setlocale(LC_ALL, "Russian");
    FILE *f; int a;
    if ((f=fopen("c:\\labor.txt", "r"))== NULL)
        printf("Can't open this fileZ/n");
    while ((a=fgetc(f))!=EOF)
    {
        if (a!='0' && a!='1' && a!='2' && a!='3' && a!='4' && a!='5' && a!='6' && a!='7' && a!='8' && a!='9')
            putchar(a);
    }
    fclose(f);
}
