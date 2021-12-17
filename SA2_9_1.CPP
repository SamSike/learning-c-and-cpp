#include <stdio.h>
#include <conio.h>
void main()
{
clrscr();
int marks,tot=0,avg,i=1;
do
{
printf("Enter marks %d : ",i);
scanf("%d",&marks);
tot=tot+marks;
i++;
}while(i<=5);
avg=tot/5;
if(avg>=91 && avg<=100)
printf("Grade A \n");
else if(avg>=81 && avg<=90)
printf("Grade B \n");
else if(avg>=71 && avg<=80)
printf("Grade C \n");
else if(avg>=51 && avg<=70)
printf("Grade D \n");
else if(avg>=40 && avg<=50)
printf("Grade E \n");
else
printf("Grade F - Fail \n");
printf("The total is %d and the average is %d",tot,avg);
getch();
}

