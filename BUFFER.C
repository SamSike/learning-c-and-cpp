#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
int gd = DETECT,gm;
int a=1,b,x,y,r=2;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
textcolor(BLACK);
for(b=1;b<=3;b++)
{
x=getmaxx()/2,y=getmaxy()/2;
clrscr();
	for(a=1;a<=20;a++)
	{
		clrscr();
		circle(x,y,r);
		if(a==1)
		{
			circle(x+6,y+1,r);
			circle(x+11,y+4,r);
			x+=6,y+=1;
		}
		if(a==2)
		{
			circle(x+5,y+3,r);
			circle(x+9,y+7,r);
			x+=5,y+=3;
		}
		if(a==3)
		{
			circle(x+4,y+4,r);
			circle(x+7,y+9,r);
			x+=4,y+=4;
		}
		if(a==4)
		{
			circle(x+3,y+5,r);
			circle(x+4,y+11,r);
			x+=3,y+=5;
		}
		if(a==5)
		{
			circle(x+1,y+6,r);
			circle(x,y+12,r);
			x+=1,y+=6;

		}
		if(a==6)
		{
			circle(x-1,y+6,r);
			circle(x-4,y+11,r);
			x-=1,y+=6;
		}
		if(a==7)
		{
			circle(x-3,y+5,r);
			circle(x-7,y+9,r);
			x-=3,y+=5;
		}
		if(a==8)
		{
			circle(x-4,y+4,r);
			circle(x-9,y+7,r);
			x-=4,y+=4;
		}
		if(a==9)
		{
			circle(x-5,y+3,r);
			circle(x-11,y+4,r);
			x-=5,y+=3;
		}
		if(a==10)
		{
			circle(x-6,y+1,r);
			circle(x-12,y,r);
			x-=6,y+=1;
		}
		if(a==11)
		{
			circle(x-6,y-1,r);
			circle(x-11,y-4,r);
			x-=6,y-=1;
		}
		if(a==12)
		{
			circle(x-5,y-3,r);
			circle(x-9,y-7,r);
			x-=5,y-=3;
		}
		if(a==13)
		{
			circle(x-4,y-4,r);
			circle(x-7,y-9,r);
			x-=4,y-=4;
		}
		if(a==14)
		{
			circle(x-3,y-5,r);
			circle(x-4,y-11,r);
			x-=3,y-=5;
		}
		if(a==15)
		{
			circle(x-1,y-6,r);
			circle(x,y-12,r);
			x-=1,y-=6;
		}
		if(a==16)
		{
			circle(x+1,y-6,r);
			circle(x+4,y-11,r);
			x+=1,y-=6;
		}
		if(a==17)
		{
			circle(x+3,y-5,r);
			circle(x+7,y-9,r);
			x+=3,y-=5;
		}
		if(a==18)
		{
			circle(x+4,y-4,r);
			circle(x+9,y-7,r);
			x+=4,y-=4;
		}
		if(a==19)
		{
			circle(x+5,y-3,r);
			circle(x+11,y-4,r);
			x+=5,y-=3;
		}
		if(a==20)
		{
			circle(x+6,y-1,r);
			circle(x+12,y,r);
			x+=6,y-=1;
		}
		delay(100);
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


















































































































































































