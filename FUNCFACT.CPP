#include<boss.h>
double factorial(int n)
{
	double fact=1;
	for(int i=1;i<=n;i++)
		fact*=i;
	return fact;
}
void main()
{
	int m;
	clrscr();
	cout<<"Input integer : ";
	cin>>m;
	double f1=factorial(m);
	double f2=factorial(8);
	double f3=factorial(m+3);
	cout<<m<<"!="<<f1;
	cout<<"\n8!="<<f2<<endl;
	cout<<"("<<m<<"+3)!="<<f3;
	getch();
}