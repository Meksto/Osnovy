#include <stdio.h>
// ����������� ������������� ��������
#define YES 1
#define NO 0
#define MAXLINE 1000
void process_line( char buffer[] );
int main( void )
{
char line[MAXLINE];
gets( line );
process_line( line );
puts( line );
return 0;
}
void process_line( char buffer[] )
{
char c; // ������� ������
int prev_c; // ���������� ������
int flag; // ������� �����
int found; // ��������� ����, ��� ������� �������
 // � ����� ���������
char *in_ptr; // ��������� �� ������� ������
 // ������� ������
char *out_ptr; // ��������� �� ������� ������
 // �������� ������
char *word_ptr; // ��������� �� ������ �����
// ��������� ������������ (�������������)
flag = NO;
found = NO;
prev_c = ' ';
word_ptr = buffer;
in_ptr = buffer;
out_ptr = buffer;
// ���� ������ �������� �� ������
do
 {
 c = *in_ptr; // ����� ������� ������ �� ������
 if( c == ' ' || c == '.' || c == ',' ||
 c == '\n' || c == '\0')
 {
 // ������ �����������
 if( flag == YES )
 {
 // ��� ������ ��������� ����� �����
 // ���������, ��������� �� � �����
 // ������� �������
 if( found == NO )
 {
 // ����� �� �������� ��������,
 // ��� ���������� � ��������������
 // ������
 while( word_ptr < in_ptr )
 *out_ptr++ = *word_ptr++;
 }
 }
 flag = NO;
 *out_ptr++ = c;
 found=NO;
 }
 else
 {
 // ������� �����
 if( flag == NO )
 word_ptr = in_ptr; // ��������� �����
 // ������ �����
 // �������� ���������� �������� �
 // ����������� ��������
 // (����������� �������� �������� � �����)
 if( (prev_c == c) && (c=='a' || c=='e' || c=='u' || c=='i' || c=='o') )
 found = YES;

 flag = YES;
 }
 prev_c = c;
 in_ptr++; // ���������� ����� ��������� ��
 // ������� ������
 }
while( c != '\0' );
}
