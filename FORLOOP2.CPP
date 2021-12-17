
 /*
*
**
***
****
*****
******
*******
********
*********
**********
*/
#include <stdio.h>
#include <conio.h>
void main()
{
clrscr();
int a,b,c;
b=1;
for(;b<11;)
{
c=b-1;
	for(a=0;a<b;)
	{
	printf("*");
	if(a==c)
	printf("\n");
	a=a+1;
	}
b=b+1;
}
getch();
}