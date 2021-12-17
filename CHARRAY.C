#include<stdio.h>
#include<conio.h>
void main()
{
char x[20],ch;
int i;
do
{
clrscr();
printf("Enter alphabets of name one at a time and type q if done : ");
for(i=0;i<=20;i++)
{
fflush(stdin);
scanf("%c",&x[i]);
if (x[i]=='q')
{
i--;
break;
}
}
for(;i>=0;i--)
{
printf("%c",x[i]);
}
printf("\nDo you want to continue? y/n : ");
fflush(stdin);
scanf("%c",&ch);
}while(ch=='y'||ch=='Y');
getch();
}



