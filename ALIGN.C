#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
int n1=5,n2=45,n3=345,n4=2345,n5=12345;
do
{
clrscr();
printf("%-8d %8d\n",n1,n1);
printf("%-8d %8d\n",n2,n2);
printf("%-8d %8d\n",n3,n3);
printf("%-8d %8d\n",n4,n4);
printf("%-8d %8d\n",n5,n5);
printf("\nDo you want to continue? y/n : ");
scanf("%c",&ch);
}while(ch=='y'||ch=='Y');
getch();
}



















































































































































































