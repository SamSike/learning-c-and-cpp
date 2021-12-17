#include<iostream.h>
#include<ctype.h>
#include<conio.h>
#include<string.h>
void PointersFun(char Text[], int &count) {
char *ptr=Text;
int length=strlen(Text);
for(; count<length-2; count+=2, ptr++){
*(ptr + count) = toupper( * (ptr + count) ); }}

void main() {
clrscr();
int position=0;
char Data[]= "ChangeString";
PointersFun(Data, position);
cout<<Data<<"@"<< position;
cout.write(Data + 3, 4); }