#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	char a[]="ghsahjykjfhjghk$$,jtjngxh",temp[100];
	int j,k,l=strlen(a),m;
	for(int i=1;i<=l;)
	{
		for(j=0,k=0,m=0;j<l;j++){
			if(a[0]==a[j])
				k++;
			else
				temp[m++]=a[j];}
		l-=k;
		cout<<a[0]<<" - "<<k<<endl;
		strcpy(a,temp);
	}
	getch();
}