#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
char charray[100];
int intarray[100];
float floatarray[100];
double doublearray[100];
do
{
clrscr();
printf("All of these are multiplied by 100 : \nSize of int = %d bytes\n",sizeof(intarray));
printf("Size of char = %d bytes\n",sizeof(charray));
printf("Size of float = %d bytes\n",sizeof(floatarray));
printf("Size of double = %d bytes\n",sizeof(doublearray));
printf("\nDo you want to continue? y/n : ");
scanf("%c",&ch);
}while(ch=='y'||ch=='Y');
getch();
}



















































































































































































