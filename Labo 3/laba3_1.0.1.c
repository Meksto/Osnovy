#include <stdio.h>
#include <conio.h> // ���������� ������������� '_getch()'
// ����������� ������������� ��������
#define YES 1
#define NO 0

int main(void)
{
    int c; // ������� ������ �� ������
	int gl; // ������� ������
	int cnt; // �������
	int prev; //
	int found; //

	// ��������� ������������ (�������������)
	gl = 0;
	cnt = 0;
	found = NO;
	prev=' ';
	// ���� ������ �������� �� ������, ���������� �
	// �����������
	while ((c = getchar()) != EOF)

{
        if (c == ' ' || c == '.' || c == ',' || c == '\n' || c == '\0' || c == '\t')
        {

                if ((gl==1) && (found==YES))
                {
                    cnt=cnt+1;
                }

        prev=' ';
        found=NO;
        gl=0;
        }

    else
    {
        if ((c == 'a' || c == 'e' || c == 'i' || c == 'y' || c == 'o' || c == 'u') && (prev==' '))
        {
            gl=1;
            prev=c;
            found=NO;
        }

            else if (c == 'a' || c == 'e' || c == 'i' || c == 'y' || c == 'o' || c == 'u')
            {
              prev=c;
              found=NO;
            }
        else
        {
            found=YES;
            prev=c;
        }
    }
}

    printf("\nNumber of words = %d", cnt);
    getch();
	return 0;
}
