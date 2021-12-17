#include<stdio.h>
#include<conio.h>
unsigned int f,x;
unsigned int factorial(unsigned int a);
void main()
{
char ch;
do
{
start:
clrscr();
printf("Enter number b/w 1 and 8 : ");
scanf("%d",&x);
if(x>8||x<1)
goto start;
else
{
f=factorial(x);
printf("%u factorial = %u\n",x,f);
}
printf("\nDo you want to continue? y/n : ");
fflush(stdin);
scanf("%c",&ch);
}while(ch=='y'||ch=='Y');
getch();
}

unsigned int factorial(unsigned int a)
{
if(a==1)
return 1;
else
{
a=a*factorial(a-1);
return a;
}
}


















































































































































































