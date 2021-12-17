#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	long int oct,i,sum=0;
	cout<<"Enter octal code : ";
	cin>>oct;
	for(i=0;oct!=0;i++,oct/=10)
		sum+=((oct%10)*pow(8,i));
	cout<<sum;
getch();
}