#include <stdio.h>
#include <conio.h>
void main()
{
int num,tbl,tbl1,tbl2,mul;
clrscr();
printf("Enter number for starting table : ");
scanf("%d",&tbl1);
printf("Enter number for ending table : ");
scanf("%d",&tbl2);
num=tbl1;
tbl2=tbl2+1;
mul=tbl1*11;
do
{
do
{
printf("%d\t",tbl1);
tbl1=tbl1+num;
}while(tbl1<mul);
printf("\n");
tbl1=num+1;
num=num+1;
mul=tbl1*11;
}while(tbl1<tbl2);
getch();
}