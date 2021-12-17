#include<stdio.h>
#include<conio.h>
int sum(int x, int y);
int dif(int x, int y);
int mul(int x, int y);
int div(int x, int y);
int *p;
int main()
{
char ch;
int x[5],y[5],z[5],i;
do
{
clrscr();
printf("Enter values for x : ");
for(i=0;i<=5;i++)
{
scanf("%d",&x[i]);
}
printf("Enter values for y : ");
for(i=0;i<=5;i++)
{
scanf("%d",&y[i]);
}
printf("Enter values for z : ");
for(i=0;i<=5;i++)
{
scanf("%d",&z[i]);
}
choice:
printf("Add-1,Sub-2,Mul-3,Div-4");
scanf("%d",&i);
switch(i)
{
case 1:
add(x,y);
break;
case 2:
dif(x,y);
break;
case 3:
mul(x,y);
break;
case 4:
div(x,y);
break;
default:
goto choice;
}
printf("Do you want to continue? y/n : ");
scanf("%s",&ch);
}while(ch=='y'||ch=='Y');
return(p);
}

int sum(int x, int y)
{
int i,z[5];
for(i=0;i<=5;i++)
{
z[i]=x[i]+y[i];
}
p=&z;
return(p);
}

int dif(int x, int y)
{
int i,z[5];
for(i=0;i<=5;i++)
{
z[i]=x[i]-y[i];
}
p=&z;
return(p);
}

int mul(int x, int y)
{
int i,z[5];
for(i=0;i<=5;i++)
{
z[i]=x[i]*y[i];
}
p=&z;
return(p);
}

int div(int x, int y)
{
int i;
float z[5];
for(i=0;i<=5;i++)
{
z[i]=x[i]/y[i];
}
p=&z;
return(p);
}
















































































































































































