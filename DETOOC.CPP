#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	long int num,i,sum;
	cout<<"Enter number : ";
	cin>>num;
	for(sum=0,i=0;num!=0;i++)
	{
		sum+=((num%8)*pow(10,i));
		num/=8;
	}
	cout<<sum;
getch();
}




















































































































































































