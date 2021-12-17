#include <stdio.h>
#include <conio.h>
void main()
{
int a,b,srt,end,user;
do
{
clrscr();
printf("Enter an integer for start of range - ");
scanf("%d",&a);
printf("Enter an integer for end of range - ");
scanf("%d",&b);
if (a<b)
srt=a,
end=b;
else
srt=b,
end=a;
end=end+1;
do
{
a=1;
	for(b=2;srt>b;b++)
	{
	if(srt%b==0)
	a=srt;
	}
if(a==1)
printf("%d\t",srt);
srt=srt+1;
}while(srt<end);

printf("\nEnter 0 to end program / 1 to restart - ");
scanf("%d",&user);
}while(user==1);
getch();
}