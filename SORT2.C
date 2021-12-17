#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
int x[5],a,i,temp;
do
{
clrscr();
printf("Enter numbers : ");
for(i=0;i<=5;i++)
{
scanf("%d",&x[i]);
}
for(a=0;a<=5;a++)
{
	for(i=a+1;i<=5;i++)
	{
		if(x[a]<x[i])
		{
		temp=x[a];
		x[a]=x[i];
		x[i]=temp;
		}
	}
}
for(i=0;i<=5;i++)
{
printf("%d\t",x[i]);
}
printf("Do you want to continue? y/n : ");
scanf("%s",&ch);
}while(ch=='y'||ch=='Y');
getch();
}





















































































































































































