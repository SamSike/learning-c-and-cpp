#include <stdio.h>
#include <conio.h>
void main()
{
clrscr();
int a,b,m[10],i,sum;
printf("Enter no. - ");
scanf("%d",&a);
i=sum=0;
	for(b=1;a>b;b++)
	{
	if(a%b==0)
	m[i]=b;
	if(m[i]==b)
	printf("%d\n",m[i]),
	sum=sum+b,
	i=i+1;
	}
if(a==sum)
printf("%d, it is a perfect number",a);
else
printf("%d, it is not a perfect number",a);
getch();
}
