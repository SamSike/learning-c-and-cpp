#include<iostream.h>
#include<conio.h>
void main()
{
	long double num,sum=0,i,x,bin;
	clrscr();
	cout<<"Enter number : ";
	cin>>num;
	for(;;)
	{
		for(bin=1,x=0,i=1;i<=num;i*=2,x++)
			if(i!=1)
				bin*=10;

		i/=2;
		sum+=bin;
		num-=i;
			if(num==0)
			break;
	}
	cout<<sum;
getch();
}



































































































































































