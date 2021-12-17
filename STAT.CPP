#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<math.h>

int a1,h,i,j,n;
int _fi=0,_fidi=0,_fidi2=0,_fiui=0,_fiui2=0,_fmx=0;
int d[100],d2[100],f[100],mx[100],fmx[100],u[100],u2[100];

double _x,A,md,sd,varx;
double _fixi=0,_fixi2=0;
double x[100],x2[100];

char a173=173,a179=179,a196=196,a228=228,a251=251,a253=253;

void normal()
{
	gotoxy(15,1);
	cout<<"f"<<a173<<"x"<<a173;
	for(i=0;i<n;i++)
	{
		gotoxy(16,i+2);
		delay(500);
		cout<<x[i]*f[i];
		_fixi+=x[i]*f[i];
	}
	gotoxy(15,i+2);
	cout<<a228<<"f"<<a173<<"x"<<a173<<"="<<_fixi;
	_x=((_fixi)/(_fi));
	gotoxy(1,i+4);
	cout<<"_     "<<a228<<"f"<<a173<<"x"<<a173<<"\n";
	cout<<"x = ";
	for(j=0;j<9;j++)
		cout<<a196;
	cout<<"\n       "<<a228<<"f"<<a173<<'\n';
	cout<<"  = ";
	cprintf("%lf\n",_x);
{
	delay(1000);
	gotoxy(28,1);
	cout<<a179<<"x"<<a173<<"-"<<"x"<<a179;
	for(i=0;i<n;i++)
	{
		if(_x>x[i])
			mx[i]=_x-x[i];
		else
			mx[i]=x[i]-_x;
		gotoxy(28,i+2);
		delay(500);
		cout<<setw(5)<<mx[i];
	}
	gotoxy(38,1);
	cout<<"f"<<a173<<a179<<"x"<<a173<<"-x"<<a179;
	for(i=0;i<n;i++)
	{
		fmx[i]=f[i]*mx[i];
		gotoxy(39,i+2);
		delay(500);
		cout<<setw(5)<<fmx[i];
		_fmx+=fmx[i];
	}
	gotoxy(37,i+2);
	cout<<a228<<"f"<<a173<<a179<<"x"<<a173<<"-x"<<a179<<"="<<_fmx;
}
{
	gotoxy(47,i+4);
	md=_fmx/_fi;
	cout<<"       "<<a228<<"f"<<a173<<a179<<"x"<<a173<<"-x"<<a179;
	gotoxy(47,i+5);
	cout<<"M.D. = ";
	for(j=0;j<9;j++)
		cout<<a196;
	gotoxy(47,i+6);
	cout<<"          "<<a228<<"f"<<a173;
	gotoxy(47,i+7);
	cout<<"     = ";
	cprintf("%lf",md);
}
	delay(1000);
	gotoxy(53,1);
	cout<<"f"<<a173<<"(x"<<a173<<")"<<a253;
	for(i=0;i<n;i++)
	{
		x2[i]=pow(x[i],2);
		gotoxy(54,i+2);
		delay(500);
		cout<<setw(5)<<x2[i]*f[i];
		_fixi2+=x2[i]*f[i];
	}
{
	gotoxy(52,i+2);
	cout<<a228<<"f"<<a173<<"(x"<<a173<<")"<<a253<<"="<<_fixi2;

	varx=(_fixi2/_fi)-(pow((_fixi/_fi),2));
	gotoxy(1,i+10);
	cout<<"          "<<a228<<"f"<<a173<<"(x"<<a173<<")"<<a253;
	cout<<"  "<<a228<<"f"<<a173<<"x"<<a173<<"\n";
	cout<<"Var(x) = (";
	for(j=0;j<7;j++)
		cout<<a196;
	cout<<")-(";
	for(j=0;j<5;j++)
		cout<<a196;
	cout<<")"<<a253;
	cout<<"\n            "<<a228<<"f"<<a173<<"      "<<a228;
	cout<<"f"<<a173<<"\n";
	cout<<"       = ";
	cprintf("%lf",varx);
	cout<<"\n\n";
}
}
void assumed()
{
	A=x[n/2];
	gotoxy(15,1);
	cout<<"d"<<a173<<"=x"<<a173<<"-"<<A;
	for(i=0;i<n;i++)
	{
		gotoxy(16,i+2);
		delay(500);
		d[i]=x[i]-A;
		cout<<setw(4)<<d[i];
	}
	gotoxy(27,1);
	cout<<"f"<<a173<<"d"<<a173;
	for(i=0;i<n;i++)
	{
		gotoxy(26,i+2);
		delay(500);
		cout<<setw(5)<<d[i]*f[i];
		_fidi+=d[i]*f[i];
	}
	gotoxy(25,i+2);
	cout<<a228<<"f"<<a173<<"d"<<a173<<"="<<_fidi;
	_x=A+((_fidi)/(_fi));
	gotoxy(1,i+4);
	cout<<"_         "<<a228<<"f"<<a173<<"d"<<a173<<"\n";
	cout<<"x = A + ";
	for(i=0;i<9;i++)
		cout<<a196;
	cout<<"\n           "<<a228<<"f"<<a173<<'\n';
	cout<<"  = ";
	cprintf("%lf",_x);
{
	delay(1000);
	gotoxy(38,1);
	cout<<a179<<"x"<<a173<<"-"<<"x"<<a179;
	for(i=0;i<n;i++)
	{
		if(_x>x[i])
			mx[i]=_x-x[i];
		else
			mx[i]=x[i]-_x;
		gotoxy(38,i+2);
		delay(500);
		cout<<setw(5)<<mx[i];
	}
	gotoxy(48,1);
	cout<<"f"<<a173<<a179<<"x"<<a173<<"-x"<<a179;
	for(i=0;i<n;i++)
	{
		fmx[i]=f[i]*mx[i];
		gotoxy(49,i+2);
		delay(500);
		cout<<setw(5)<<fmx[i];
		_fmx+=fmx[i];
	}
	gotoxy(47,i+2);
	cout<<a228<<"f"<<a173<<a179<<"x"<<a173<<"-x"<<a179<<"="<<_fmx;
}
{
	gotoxy(47,i+4);
	md=_fmx/_fi;
	cout<<"       "<<a228<<"f"<<a173<<a179<<"x"<<a173<<"-x"<<a179;
	gotoxy(47,i+5);
	cout<<"M.D. = ";
	for(j=0;j<9;j++)
		cout<<a196;
	gotoxy(47,i+6);
	cout<<"          "<<a228<<"f"<<a173;
	gotoxy(47,i+7);
	cout<<"     = ";
	cprintf("%lf",md);
}
	delay(1000);
	gotoxy(63,1);
	cout<<"f"<<a173<<"(d"<<a173<<")"<<a253;
	for(i=0;i<n;i++)
	{
		d2[i]=pow(d[i],2);
		gotoxy(64,i+2);
		delay(500);
		cout<<setw(5)<<d2[i]*f[i];
		_fidi2+=d2[i]*f[i];
	}
{
	gotoxy(62,i+2);
	cout<<a228<<"f"<<a173<<"(d"<<a173<<")"<<a253<<"="<<_fidi2;
	varx=(_fidi2/_fi)-(pow((_fidi/_fi),2));
	gotoxy(1,i+10);
	cout<<"          "<<a228<<"f"<<a173<<"(d"<<a173<<")"<<a253;
	cout<<"  "<<a228<<"f"<<a173<<"d"<<a173<<"\n";
	cout<<"Var(x) = (";
	for(i=0;i<7;i++)
		cout<<a196;
	cout<<")-(";
	for(i=0;i<5;i++)
		cout<<a196;
	cout<<")"<<a253;
	cout<<"\n            "<<a228<<"f"<<a173<<"      "<<a228;
	cout<<"f"<<a173<<"\n";
	cout<<"       = ";
	cprintf("%lf",varx);
	cout<<"\n\n";
}
}
int hcf()
{
	int _hcf=1,xyz;
	for(i=1;i<x[1];i++)
	{
		for(int c=0,j=0;j<n-1;j++)
		{
			xyz=x[j+1]-x[j];
			if(xyz%i!=0)
				c++;
		}
		if(c==0)
			_hcf=i;
	}
	return(_hcf);
}
void deviation()
{
	A=x[n/2];
	h=hcf();
	gotoxy(14,1);
	cout<<"u"<<a173<<"=(x"<<a173<<"-"<<A<<")/"<<h;
	for(i=0;i<n;i++)
	{
		gotoxy(16,i+2);
		delay(500);
		u[i]=(x[i]-A)/h;
		cout<<setw(5)<<u[i];
	}
	gotoxy(29,1);
	cout<<"f"<<a173<<"u"<<a173;
	for(i=0;i<n;i++)
	{
		gotoxy(28,i+2);
		delay(500);
		cout<<setw(4)<<u[i]*f[i];
		_fiui+=u[i]*f[i];
	}
	gotoxy(27,i+2);
	cout<<a228<<"f"<<a173<<"u"<<a173<<"="<<_fiui;
	_x=A+h*((_fiui)/(_fi));
	gotoxy(1,i+4);
	cout<<"_          "<<a228<<"f"<<a173<<"u"<<a173<<"\n";
	cout<<"x = A + (";
	for(i=0;i<9;i++)
		cout<<a196;
	cout<<")xh\n";
	cout<<"            "<<a228<<"f"<<a173<<'\n';
	cout<<"  = ";
	cprintf("%lf",_x);
{
	delay(1000);
	gotoxy(38,1);
	cout<<a179<<"x"<<a173<<"-"<<"x"<<a179;
	for(i=0;i<n;i++)
	{
		if(_x>x[i])
			mx[i]=_x-x[i];
		else
			mx[i]=x[i]-_x;
		gotoxy(38,i+2);
		delay(500);
		cout<<setw(5)<<mx[i];
	}
	gotoxy(48,1);
	cout<<"f"<<a173<<a179<<"x"<<a173<<"-x"<<a179;
	for(i=0;i<n;i++)
	{
		fmx[i]=f[i]*mx[i];
		gotoxy(49,i+2);
		delay(500);
		cout<<setw(5)<<fmx[i];
		_fmx+=fmx[i];
	}
	gotoxy(47,i+2);
	cout<<a228<<"f"<<a173<<a179<<"x"<<a173<<"-x"<<a179<<"="<<_fmx;
}
{
	gotoxy(47,i+4);
	md=_fmx/_fi;
	cout<<"       "<<a228<<"f"<<a173<<a179<<"x"<<a173<<"-x"<<a179;
	gotoxy(47,i+5);
	cout<<"M.D. = ";
	for(j=0;j<9;j++)
		cout<<a196;
	gotoxy(47,i+6);
	cout<<"          "<<a228<<"f"<<a173;
	gotoxy(47,i+7);
	cout<<"     = ";
	cprintf("%lf",md);
}
	delay(1000);
	gotoxy(63,1);
	cout<<"f"<<a173<<"(u"<<a173<<")"<<a253;
	for(i=0;i<n;i++)
	{
		u2[i]=pow(u[i],2);
		gotoxy(64,i+2);
		delay(500);
		cout<<setw(5)<<u2[i]*f[i];
		_fiui2+=u2[i]*f[i];
	}
{
	gotoxy(62,i+2);
	cout<<a228<<"f"<<a173<<"(u"<<a173<<")"<<a253<<"="<<_fiui2;
	varx=pow(h,2)*((_fiui2/_fi)-(pow((_fiui/_fi),2)));
	gotoxy(1,i+10);
	cout<<"           "<<a228<<"f"<<a173<<"(u"<<a173<<")"<<a253;
	cout<<"  "<<a228<<"f"<<a173<<"u"<<a173<<"\n";
	cout<<"Var(x) = ((";
	for(i=0;i<7;i++)
		cout<<a196;
	cout<<")-(";
	for(i=0;i<5;i++)
		cout<<a196;
	cout<<")"<<a253<<") x h"<<a253;
	cout<<"\n             "<<a228<<"f"<<a173<<"      "<<a228;
	cout<<"f"<<a173<<"\n";
	cout<<"       = ";
	cprintf("%lf",varx);
	cout<<"\n\n";
}
}
void mean()
{
	start:
	randomize();
	int ch;
	cout<<"\nUse which method?\n\n";
	cout<<"\n\t1.Normal\n\t2.Assumed Mean\n\t3.Step Deviation\n";
	cin>>ch;
	if(!(ch==1||ch==2||ch==3))
	{
		clrscr();
		goto start;
	}



	start1:
	clrscr();
	cout<<"How many matches has the player played? : ";
	cin>>n;
	if(n>100||n<0)
		goto start1;
	clrscr();
	cout<<"x"<<a173<<"\n";
	for(i=0;i<n;i++)
		cin>>x[i];
	gotoxy(8,1);
	cout<<"f"<<a173;
	for(i=0;i<n;i++)
	{
		gotoxy(8,i+2);
		cin>>f[i];
		_fi+=f[i];
	}
	gotoxy(7,i+2);
	cout<<a228<<"f"<<a173<<"="<<_fi;
	do{
		a1=random(14)+1;
	}while(a1==7||a1==8);
	textcolor(a1);


	switch(ch)
	{
		case 1:
			normal();
			break;
		case 2:
			assumed();
			break;
		case 3:
			deviation();
			break;
	}
	delay(1000);
	sd=sqrt(varx);
	gotoxy(47,i+11);
	cout<<"S.D. = "<<a251<<"Var(x) = "<<a251<<varx;
	gotoxy(47,i+12);
	cout<<"     = ";
	cprintf("%lf",sd);
	gotoxy(47,i+15);
	cout<<"C.V = S.D. / x";
	gotoxy(47,i+16);
	cout<<"    = ";
	cprintf("%lf",(sd/_x)*100);
}
void main()
{
	start:
	clrscr();
	int ch;
	cout<<"To find Consistency of a Cricket Player\n";
	mean();
	getch();
}