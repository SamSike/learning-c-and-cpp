#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
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



















































































































































































