#include<stdio.h>
#include<conio.h>
void max(int x[5]);
void min(int x[5]);
void sum(int x[5]);
void avg(int x[5]);
void all(int x[5]);

void main()
{
char ch;
int x[5],i,c;
do
{
clrscr();
printf("Enter values 1 by 1 : ");
fflush(stdin);
for(i=0;i<=5;i++)
{
scanf("%d",&x[i]);
}
choice:
printf("Enter for Max-1, Min-2, Sum-3, Avg-4, All-5 : ");
fflush(stdin);
scanf("%d",&c);
switch(c)
{
case 1:
max(x);
break;
case 2:
min(x);
break;
case 3:
sum(x);
break;
case 4:
avg(x);
break;
case 5:
all(x);
break;
default:
goto choice;
}
printf("\nDo you want to continue or make your choice again? y/n/c : ");
scanf("%s",&ch);
if(ch=='c'||ch=='C')
goto choice;
}while(ch=='y'||ch=='Y');
getch();
}

void max(int x[5])
{
int i,max;
max=x[0];
for(i=0;i<=5;i++)
{
if(max<x[i])
max=x[i];
}
printf("%d",max);
}

void min(int x[5])
{
int i,min;
min=x[0];
for(i=0;i<=5;i++)
{
if(min>x[i])
min=x[i];
}
printf("%d",min);
}

void sum(int x[5])
{
int i,sum=0;
for(i=0;i<=5;i++)
{
sum=sum+x[i];
}
printf("%d",sum);
}

void avg(int x[5])
{
int i,avg;
for(i=0;i<=5;i++)
{
avg=avg+x[i];
}
avg=avg/6;
printf("%d",avg);
}

void all(int x[5])
{
int i,max,min,sum,avg;
max=min=x[0];
for(i=0;i<=5;i++)
{
if(max<x[i])
max=x[i];
if(min>x[i])
min=x[i];
sum=sum+x[i];
}
avg=sum/6;
printf("%d=max,%d=min,%d=sum,%d=avg",max,min,sum,avg);
}















































































































































































