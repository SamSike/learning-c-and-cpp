#include<stdio.h>
#include<conio.h>
void setup();
void draw();
void main()
{
setup();
draw();
getch();
}
int a=0;
float b=0;

void setup()
{
size(640,360);
stroke(255);
}
void draw()
{
int height=10,width=10;
background(0);
a++;
b=b+0.2;
line(a,0,a,height/2);
line(b,height/2,b,height);
if(a>width)
a=0;
if(b>width)
b=0;
}









































































































































































