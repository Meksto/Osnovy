#include <stdio.h>
// определение символических констант
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
char c; // текущий символ
int prev_c; // предыдущий символ
int flag; // признак слова
int found; // индикатор того, что искомый признак
 // в слове обнаружен
char *in_ptr; // указатель на текущий символ
 // входной строки
char *out_ptr; // указатель на текущий символ
 // выходной строки
char *word_ptr; // указатель на начало слова
// начальные присваивания (инициализация)
flag = NO;
found = NO;
prev_c = ' ';
word_ptr = buffer;
in_ptr = buffer;
out_ptr = buffer;
// цикл чтения символов из строки
do
 {
 c = *in_ptr; // взять текущий символ из буфера
 if( c == ' ' || c == '.' || c == ',' ||
 c == '\n' || c == '\0')
 {
 // найден разделитель
 if( flag == YES )
 {
 // это первый разделить после слова
 // проверить, обнаружен ли в слове
 // искомый признак
 if( found == NO )
 {
 // слово не подлежит удалению,
 // оно копируется в результирующую
 // строку
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
 // найдена буква
 if( flag == NO )
 word_ptr = in_ptr; // запомнить адрес
 // начала слова
 // проверка совпадения текущего и
 // предыдущего символов
 // (обнаружение искомого признака в слове)
 if( (prev_c == c) && (c=='a' || c=='e' || c=='u' || c=='i' || c=='o') )
 found = YES;

 flag = YES;
 }
 prev_c = c;
 in_ptr++; // продвинуть вперёд указатель на
 // текущий символ
 }
while( c != '\0' );
}
