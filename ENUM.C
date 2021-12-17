#include<stdio.h>
#include<conio.h>
void main()
{
enum months{JAN=5,FEB,MAR=10,APR,MAY,JUN,JUL} today=JAN;
int i;
clrscr();
for(i=1;i<=7;i++,today++)
{
if(i==1)
today=JAN;
if(i==2)
today=FEB;
if(i==3)
today=MAR;
if(i==4)
today=APR;
printf("%d\t",today);
}
getch();
}



















































































































































































