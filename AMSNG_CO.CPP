#include <stdio.h>
#include <conio.h>
void c1();
void c2();

void main()
{
int srt,end,b,s,c,n,user;
do
{
clrscr();
printf("Calculate if a number is an armstrong no. - Enter 0,\nCalculate all armstrong numbers within a range - Enter 1 : ");
scanf("%d",&c);
if(c==0)
{
c1();
}
if(c==1)
{
c2();
}
printf("\nEnter 0 to end program / 1 to restart - ");
scanf("%d",&user);
}while(user==1);
getch();
}

void c1()
{
int srt,b,s,n;
printf("Enter number : ");
scanf("%d",&srt);
n=srt;
s=0;
while(n>0)
{
b=n%10;
n=n/10;
s=s+(b*b*b);
}
if(s==srt)
printf("\n%d is an armstrong number",srt);
else
printf("\n%d is not an armstrong number",srt);
}

void c2()
{
int srt,end,b,s,n;
printf("Enter number for start of range : ");
scanf("%d",&srt);
printf("Enter number for end of range : ");
scanf("%d",&end);
end=end+1;
do
{
n=srt;
s=0;
while(n>0)
{
b=n%10;
n=n/10;
s=s+(b*b*b);
}
if(s==srt)
printf("%d\t",srt);
srt=srt+1;
}while(srt<end);
}