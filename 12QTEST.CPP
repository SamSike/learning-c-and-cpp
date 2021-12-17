#include<iostream.h>
#include<conio.h>

void main(){
	clrscr();
	char *q="BEST OF LUCK";
	int *p, N[]={4,5,9,12};
	p=N;
	cout<<*p<<" "<<q<<endl;
	q++;
	p++;
	cout<<*p<<" "<<q<<"\n";
	cout<<q+2<<"\t"<<*q;
	cout<<endl<<*q+2<<"\t"<<*(q+2);
	getch();}