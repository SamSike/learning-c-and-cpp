#include <stdio.h>
#include <conio.h>
void main()
{
int x=1,y=2,n;
clrscr();
printf("Enter n");
scanf("%d",&n);
if(n>0)
{
x=x+1;
y=y-1;
}
printf("%4d%4d",x+y,x-y);
getch();
}



