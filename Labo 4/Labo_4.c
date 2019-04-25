#include <locale.h>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLINE 500

int main (void)
{
    setlocale(LC_ALL, "Rus");
    char mas1[MAXLINE]; //то шо задает пользователь до пожилой кнпоки ентер
    char mas2[MAXLINE]; //не ну эта тупа как сказала бы одна баба "корзиночка"
    char mas3[MAXLINE]; // то шо будет видеть пожилой юзер после нажати€ заветного "боша€ така€ кнопка € нажало и оно такой опа"
    int i1; //позици€ символа чтени€ в массиве 1
    int i2; //позици€ символа чтени€ в массиве 2
    int prev; //ну нам же нужен предыдущий символ дл€ проверки
    int c; //текущий символ
    int dl1; //длина массива без \0 использую как strlen
    int hr; //
    int dl2;
    int hr2;
    int prb; // probel v mass2
    int c2;

    i1=0;
    i2=0;
    prev=' ';
    c=0;
    hr=0;
    mas3[0]='\0';

        printf("¬ведите слова и нажмите ентер\n");
        gets(mas1);
        dl1=strlen(mas1);

               for (hr=0;hr<=dl1;hr++) //работа с 1м массивом
               {
                c=mas1[i1];
                    if ((c!=' ') && (hr==dl1))
                        {
                     mas2[i2]=c;
                     i2++;
                     i1++;
                     goto p;
                        }
                    else if (c!=' ')
                    {
                     mas2[i2]=c;
                     i2++;
                     i1++;
                    }
                    else
                    {
                        p:
                        dl2=strlen(mas2);
                                for (hr2=0;hr2<=dl2;hr2++) //работа со 2м массивом
                                {
                                    c2=mas2[hr2];
                                    if ((c2 == 'a' || c2 == 'e' || c2 == 'i' || c2 == 'y' || c2 == 'o' || c2 == 'u') && (prev == 'a' || prev == 'e' || prev == 'i' || prev == 'y' || prev == 'o' || prev == 'u'))
                                    {
                                        memset(mas2, 0, sizeof (mas2));
                                        break;
                                    }
                                    prev=c2;
                                }
                        if (dl2==strlen(mas2))
                        {
                        prb=dl2;
                        mas2[prb]=' ';
                        strcat(mas3,mas2);
                        }
                        prev=' ';
                        i1++;
                        i2=0;
                        memset(mas2, 0, sizeof (mas2));
                    }
               }
               printf("\n”дал€ю все слова с повтор€ющимис€ гласными буквами, подождите\n");
               sleep(1);
               puts(mas3);

     return 0;
}
