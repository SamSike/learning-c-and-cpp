//palindrome//
#include<stdio.h>
#include<conio.h>
void main()
{
char ch,x[20];
int a,b,i;
do
{
clrscr();
a=0;
b=1;
i=0;
printf("Enter characters of palindrome : ");
fflush(stdin);
scanf("%s",&x);
for(i=0;i<=20;i++)
{
	if(x[i]=='\0')
	break;
}
i--;
printf("Word is %d letters long \n",i+1);
while(a!=i)
{
	if(x[a]!=x[i])
	{
		b=0;
		goto end;
	}
	b=1;
	a++;
	i--;

	if(i-a==1)
	goto end;
}
end:
if(b==1)
{
	printf("The word is a palindrome \n");
	printf("Enter character to be searched : ");
	fflush(stdin);
	scanf("%c",&ch);
	for(i=0;i<=20;i++)
	{
		if(ch==x[i])
		{
			printf("The character is at position %d",++i);
			goto end1;
		}
	}
}
else
printf("The word is not a palindrome");
end1:
printf("\nDo you want to continue? y/n : ");
fflush(stdin);
scanf("%c",&ch);
}while(ch=='y'||ch=='Y');
getch();
}



















































































































































































