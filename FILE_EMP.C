#include<stdio.h>
#include<conio.h>
#define NULL 0
int main()
{
FILE *fptr;
char name[10];
int salary,a,b,n;
clrscr();
	fptr = fopen("program.txt","w");
	if(fptr==NULL)
	{
		printf("Error!");
		exit(1);
	}
printf("Enter number of names : ");
scanf("%d",&n);
fprintf(fptr,"Name\tSalary\n");
for(a=1;a<=14;a++)
{
fprintf(fptr,"_");
}
for(b=1;b<=n;b++)
{
printf("Enter name : ");
scanf("%s",&name);
sal:
printf("Enter salary below 30,000 : ");
scanf("%d",&salary);
if(salary>30000)
goto sal;
fprintf(fptr,"\n%s\t%d",name,salary);
}
fclose(fptr);
getch();
return(0);
}





















































































































































































