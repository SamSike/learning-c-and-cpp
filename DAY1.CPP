#include<iostream.h>
#include<conio.h>
#include<math.h>

void rangep(){
	int m,n,i,j,x=0;
	cout<<"Enter range : ";
	cin>>m>>n;
	for(i=m;i<=n;i++){
		for(x=0,j=2;j<i;j++)
			if(!(i%j))
				x=1;
		if(!x)
			cout<<i<<'\t';}}

void indivp(){
	int i,n,x=0;
	cout<<"Enter number : ";
	cin>>n;
	for(i=2;i<n;i++)
		if(!(n%i))
			x=1;
	if(x)
		cout<<"Not Prime";
	else
		cout<<"Prime";}

void prime(){
	int a;
	cout<<"Enter\n1. Range of Prime numbers\n2. Check if number is prime\n";
	cin>>a;
	switch(a){
		case 1:
			rangep();
			break;
		case 2:
			indivp();}}

void fact(){
	int i;
	double f;
	cout<<"Enter number : ";
	cin>>f;
	for(i=f-1;i>1;i--)
		f*=i;
	cout<<f;}

void rangea(){
	int i,m,n,a,j,l=0;
	cout<<"Enter range : ";
	cin>>m>>n;
	for(i=m;i<=n;i++){
		for(j=i;j>0;){
			a=j%10;
			j/=10;
			l+=pow(a,3);}
		if(l==i)
			cout<<i<<"\t";}}

void indiva(){
	int i,n,a,j=0;
	cout<<"Enter number : ";
	cin>>n;
	for(i=n;n>0;){
		a=n%10;
		n/=10;
		j+=pow(a,3);}
	if(i!=j)
		cout<<"Not ";
	cout<<"Armstrong";}

void arm(){
	int ch;
	cout<<"Enter\n1. Range of Armstrong numbers\n2. Check if number is armstrong\n";
	cin>>ch;
	switch(ch){
		case 1:
			rangea();
			break;
		case 2:
			indiva();}}

void pal(){
	int i,m=0,n;
	cout<<"Enter number : ";
	cin>>n;
	for(i=n;n>0;m*=10,n/=10){
		m+=n%10;}
	m/=10;
	if(i!=m)
		cout<<"Not ";
	cout<<"Palindrome";}

void fib(){
	int n,i=0,j=1,f;
	cout<<"Enter limit : ";
	cin>>n;
	cout<<i<<"\t"<<j<<"\t";
	for(f=i+j;f<n;i=j,j=f,f=i+j)
		cout<<f<<'\t';}

void main(){
	int a;
	clrscr();
	cout<<"Prime : \n";
	prime();
	cout<<"\nFactorial : \n";
	fact();
	cout<<"\nArmstrong : \n";
	arm();
	cout<<"\nPalindrome : \n";
	pal();
	cout<<"\nFibonacci : \n";
	fib();
	getch();
}