#include<stdio.h>
#include<conio.h>
void add();
void sub();
void mul();
void div();
int v1,v2,c,ans,rem,user;
void main()
{
do
{
clrscr();
printf("Enter value 1 : ");
scanf("%d",&v1);
printf("Enter value 2 : ");
scanf("%d",&v2);
printf("Which operation should take place on these numbers?\nAdd-1, Subtract-2, Multiply-3, Divide-4 : ");
scanf("%d",&c);
if(c==1)
{
 add();
}
if(c==2)
{
 sub();
}
if(c==3)
{
 mul();
}
if(c==4)
{
 div();
}
if(c==4)
printf("Your quotient is %d and the remainder is %d",ans,rem);
else
printf("Your answer is %d",ans);
printf("\nEnter 0 to end program / 1 to restart : ");
scanf("%d",&user);
}while(user==1);
getch();
}

void add()
{
ans=v1+v2;
}
void sub()
{
if(v1>v2)
ans=v1-v2;
else
ans=v2-v1;
}
void mul()
{
ans=v1*v2;
}
void div()
{
	if(v1>v2)
	ans=v1/v2,
	rem=v1%v2;

	else
	ans=v2/v1,
	rem=v2%v1;
}