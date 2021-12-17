#include <stdio.h>
#include <conio.h>
void add();
void sub();
void mul();
void div();
int ans,rem;

void main()
{
clrscr();
int c;
printf("Add - 1, Subtract - 2, Multiply - 3, Division - 4 : ");
scanf("%d",&c);
if(c==1)
add();
if(c==2)
sub();
if(c==3)
mul();
if(c==4)
div();
printf("Your answer is %d",ans);
if(c==4)
printf(" and the remainder is %d",rem);
getch();
}

void add()
{
int a,b,sum;
printf("Enter first number : ");
scanf("%d",&a);
printf("Enter second number : ");
scanf("%d",&b);
sum=a+b;
ans=sum;
}

void sub()
{
int a,b,dif;
printf("Enter first number : ");
scanf("%d",&a);
printf("Enter second number : ");
scanf("%d",&b);
if(a>b)
dif=a-b;
if(a<b)
dif=b-a;
ans=dif;
}

void mul()
{
int a,b,pro;
printf("Enter first number : ");
scanf("%d",&a);
printf("Enter second number : ");
scanf("%d",&b);
pro=a*b;
ans=pro;
}

void div()
{
int a,b,quo;
printf("Enter first number : ");
scanf("%d",&a);
printf("Enter second number : ");
scanf("%d",&b);
if(a>b)
quo=a/b,
rem=a%b;
if(a<b)
quo=b/a,
rem=b%a;
ans=quo;
}







