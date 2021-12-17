#include<stdio.h>
#include<conio.h>
void sum();
int dif();
int mul(int x, int y);
void main()
{
char ch;
int x,y,c;
do
{
clrscr();
choice:
printf("Sum-1,Dif-2,Mul-3 : ");
scanf("%d",&c);
switch(c)
{
case 1:
sum();
break;
case 2:
c=dif();
printf("%d",c);
break;
case 3:
printf("Enter two values : ");
scanf("%d %d",&x,&y);
c=mul(x,y);
printf("%d",c);
break;
default:
goto choice;
}
printf("\nDo you want to continue? y/n : ");
fflush(stdin);
scanf("%c",&ch);
}while(ch=='y'||ch=='Y');
getch();
}

void sum()
{
int x,y,c;
printf("Enter two values : ");
scanf("%d %d",&x,&y);
c=x+y;
printf("%d",c);
}

int dif()
{
int x,y,c;
printf("Enter two values : ");
scanf("%d %d",&x,&y);
c=x-y;
return(c);
}

int mul(int x,int y)
{
int c;
c=x*y;
return(c);
}














































































































































































