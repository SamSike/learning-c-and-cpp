//search characters//
#include <stdio.h>
#include <conio.h>
void main()
{
char x[20],ch;
int i;
do
{
clrscr();
printf("Enter alphabets : ");
scanf("%s",&x);
printf("Enter alphabet to be searched : ");
fflush(stdin);
scanf("%c",&ch);
for(i=0;x[i]!='\0';i++)
{
	if(x[i]==ch)
	{
		printf("The charcter %c is at position %d",x[i],i+1);
		ch=='y';
		break;
	}
}
printf("\nDo you want to replace the character? y/n : ");
fflush(stdin);
scanf("%c",&ch);
if(ch=='y')
{
printf("Enter character : ");
fflush(stdin);
scanf("%c",&ch);
x[i]=ch;
printf("The new word is %s",x);
}
printf("\nDo you want to continue? y/n : ");
fflush(stdin);
scanf("%c",&ch);
}while(ch=='y'||ch=='Y');
getch();
}


