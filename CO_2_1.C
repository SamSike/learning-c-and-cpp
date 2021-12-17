#include<stdio.h>
#include<conio.h>
void prime();
void fctrial();
int ch;
void main()
{
clrscr();
	 start:
	printf("Enter 1 for prime numbers and 2 for factorials : ");
	scanf("%d",&ch);
	if(ch==1)
	 prime();
	else if(ch==2)
	 fctrial();
	else
	{
		ch=0;
		goto start;
	}
getch();
}

void prime()
{
	int srt,end,temp,a,b;
	 begin:
	printf("Enter range of numbers : ");
	scanf("%d%d",&srt,&end);
	if(end<srt)
	{
		temp=srt;
		srt=end;
		end=temp;
	}
	if(srt<=0)
	goto begin;
	for(a=srt;a<=end;a++)
	{
	ch=1;
		for(b=2;b<a;b++)
		{
			if(a%b==0)
			ch=0;
		}
	if(ch!=0)
	printf("%d\t",a);
	}
}

void fctrial()
{
	long int a,b;
	printf("Enter number : ");
	scanf("%ld",&a);
	b=a-1;
	while(b>0)
	{
		a=a*b;
		b--;
	}
	printf("Factorial of the number is %ld",a);
}









