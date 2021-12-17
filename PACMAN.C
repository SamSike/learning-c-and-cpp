#include<sameer.h>
void main()
{
int i,a175=175;
clrscr();
for(i=1;i<=79;i++)
{
	if(i==1)
		printf("%c",a175);
	else if(i==79)
		{
		gotoxy (i-1,1);
		printf("%c",a175);
		}
	else
		{
		gotoxy (i-1,1);
		printf(" %c",a175);
		}
	delay(2000);
}
getch();
}



















































































































































































