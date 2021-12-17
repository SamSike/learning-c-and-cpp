#include<boss.h>
void change(int &g,int N=10)
{
	g++;
	N--;
}
void main()
{
	clrscr();
	int p=110,k=100;
	change(p,k);
	cout<<p<<","<<k<<endl;
	change(k);
	cout<<p<<","<<k<<endl;
	change(k,15);
	cout<<p<<","<<k<<endl;
getch();
}