#include<stdio.h>
#include<conio.h>
#define NULL 0
int main()
{
FILE *fpt,*fptr;
int a,b;
char c,fname[8],fame[8];
clrscr();
	printf("Enter key : ");
	scanf("%d",&b);
	printf("Enter file name for reading and writing : ");
	scanf("%s",&fname);
	fflush(stdin);
	scanf("%s",&fame);
	printf("%s\t\t%s\n",fname,fame);
	if((fpt=fopen(fname,"r"))==NULL)
	printf("\nERROR - Cannot open the designated file\n");
	else
	{
	fptr = fopen(fame,"w");
	if(fptr==NULL)
	{
		printf("Error!");
		exit(1);
	}
	for(;c!=10+b;c++)
	{
	putchar(c=getc(fpt));
	delay(10);
	if(c!=' ')
	{
	a=c;
	a+=b;
	c=a;
		if(c==' ')
		{
		a-=b;
		c=a;
		}
	}
	fprintf(fptr,"%c",c);
	}
fprintf(fptr,"\n\nKey is %d",b);
}
fclose(fpt);
fclose(fptr);
getch();
return(0);
}


















































































































































































