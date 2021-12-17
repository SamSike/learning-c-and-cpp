#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int buffer();
int circles();
void symbols();

int buffer()
{
int gd = DETECT,gm;
int a=1,b,x,y,r=5;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
textcolor(BLACK);
for(b=1;b<=3;b++)
{
x=getmaxx()/2,y=getmaxy()/3;
clrscr();
	for(a=1;a<=20;a++)
	{
		clrscr();
		circle(x,y,r);
		if(a==1)
		{
			circle(x+16,y+3,r);
			circle(x+30,y+11,r);
			x+=16,y+=3;
		}
		if(a==2)
		{
			circle(x+14,y+8,r);
			circle(x+25,y+19,r);
			x+=25,y+=8;
		}
		if(a==3)
		{
			circle(x+11,y+11,r);
			circle(x+17,y+26,r);
			x+=11,y+=11;
		}
		if(a==4)
		{
			circle(x+6,y+15,r);
			circle(x+9,y+30,r);
			x+=6,y+=15;
		}
		if(a==5)
		{
			circle(x+3,y+15,r);
			circle(x,y+30,r);
			x+=3,y+=15;

		}
		if(a==6)
		{
			circle(x-3,y+15,r);
			circle(x-9,y+30,r);
			x-=3,y+=15;
		}
		if(a==7)
		{
			circle(x-6,y+15,r);
			circle(x-17,y+26,r);
			x-=6,y+=15;
		}
		if(a==8)
		{
			circle(x-11,y+11,r);
			circle(x-25,y+19,r);
			x-=11,y+=11;
		}
		if(a==9)
		{
			circle(x-14,y+8,r);
			circle(x-30,y+11,r);
			x-=14,y+=8;
		}
		if(a==10)
		{
			circle(x-16,y+3,r);
			circle(x-32,y,r);
			x-=16,y+=3;
		}
		if(a==11)
		{
			circle(x-16,y-3,r);
			circle(x-30,y-11,r);
			x-=16,y-=3;
		}
		if(a==12)
		{
			circle(x-14,y-8,r);
			circle(x-25,y-19,r);
			x-=14,y-=8;
		}
		if(a==13)
		{
			circle(x-11,y-11,r);
			circle(x-17,y-26,r);
			x-=11,y-=11;
		}
		if(a==14)
		{
			circle(x-6,y-15,r);
			circle(x-9,y-30,r);
			x-=6,y-=15;
		}
		if(a==15)
		{
			circle(x-3,y-15,r);
			circle(x,y-30,r);
			x-=3,y-=15;
		}
		if(a==16)
		{
			circle(x+3,y-15,r);
			circle(x+9,y-30,r);
			x+=3,y-=15;
		}
		if(a==17)
		{
			circle(x+6,y-15,r);
			circle(x+17,y-26,r);
			x+=6,y-=15;
		}
		if(a==18)
		{
			circle(x+11,y-11,r);
			circle(x+25,y-19,r);
			x+=11,y-=11;
		}
		if(a==19)
		{
			circle(x+14,y-8,r);
			circle(x+30,y-11,r);
			x+=14,y-=8;
		}
		if(a==20)
		{
			circle(x+16,y-3,r);
			circle(x+32,y,r);
			x+=16,y-=3;
		}
		delay(250);
	}
}
clrscr();
x=27,y=16;
gotoxy(x,y);
printf("Loading of video is complete");
getch();
closegraph();
return 0;
}

int circles()
{
int gd = DETECT,gm;
int x,y,radius;
clrscr();
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
x=getmaxx()/2;
y=getmaxy()/2;
outtextxy(x-100,50,"CIRCLE Using Graphics in C");
for(radius=300;radius>=0;radius-=10)
{
circle(x,y,radius);
delay(500);
}
getch();
closegraph();
return 0;
}

void symbols()
{
char ch;
int i;
clrscr();
for(i=0;i<=200;i++)
{
printf("%d=%c\t",i,i);
}
getch();
}