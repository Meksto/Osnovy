#include <locale.h>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLINE 500

int main (void)
{
    setlocale(LC_ALL, "Rus");
    char mas1[MAXLINE]; //�� �� ������ ������������ �� ������� ������ �����
    char mas2[MAXLINE]; //�� �� ��� ���� ��� ������� �� ���� ���� "����������"
    char mas3[MAXLINE]; // �� �� ����� ������ ������� ���� ����� ������� ��������� "����� ����� ������ � ������ � ��� ����� ���"
    int i1; //������� ������� ������ � ������� 1
    int i2; //������� ������� ������ � ������� 2
    int prev; //�� ��� �� ����� ���������� ������ ��� ��������
    int c; //������� ������
    int dl1; //����� ������� ��� \0 ��������� ��� strlen
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

        printf("������� ����� � ������� �����\n");
        gets(mas1);
        dl1=strlen(mas1);

               for (hr=0;hr<=dl1;hr++) //������ � 1� ��������
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
                                for (hr2=0;hr2<=dl2;hr2++) //������ �� 2� ��������
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
               printf("\n������ ��� ����� � �������������� �������� �������, ���������\n");
               sleep(1);
               puts(mas3);

     return 0;
}
