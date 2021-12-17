#include <stdio.h>
#include <conio.h>
void main()
{
int a[10],i,min,max,sum_e,sum_o,user;
do
{
clrscr();
sum_o=sum_e=max=0;

for(i=0;i<10;i++)
{
printf("Enter value : ");
scanf("%d",&a[i]);
min=a[0];
	if(a[i]%2==1)
	sum_o=sum_o+a[i];
	else
	sum_e=sum_e+a[i];

	if(a[i]<min)
	min=a[i];

	if(a[i]>max)
	max=a[i];
}
printf("Smallest no. - %d, \nLargest no. - %d, \nSum of all odd nos. - %d \nand Sum of all even nos. - %d",min,max,sum_o,sum_e);
printf("\nEnter 0 to end the program / 1 to restart");
scanf("%d",&user);
}while(user==1);
getch();
}

