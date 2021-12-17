#include<stdio.h>
#include<conio.h>
void main()
{
struct emp
	{
	char name[10];
	int num;
	float sal,hra,da,pf;
	};
char ch;
int a,b=0,i,nm;
struct emp x[5];
do
{
clrscr();
for(i=0;i<5;i++)
{
printf("Enter name, employee number and basic salary: ");
scanf("%s %d %f",&x[i].name,&x[i].num,&x[i].sal);
}
printf("Enter num of employee to be searched : ");
scanf("%d",&nm);
for(i=0;i<5;i++)
{
	if(nm==x[i].num)
	{
	printf("Employee name : %s\nEmployee number : %d\nBasic Salary : %f\n",x[i].name,x[i].num,x[i].sal);
		x[i].hra=x[i].sal*0.1;
		x[i].da=x[i].sal*0.05;
		x[i].pf=x[i].sal*0.1;
			x[i].sal=x[i].sal+x[i].hra+x[i].da-x[i].pf;
	printf("HRA : %f\nDA : %f\nPF : %f\nTotal Salary : %f",x[i].hra,x[i].da,x[i].pf,x[i].sal);
	goto end;
	}
}
if(b==0)
printf("Employee not found");
end:
for(i=0;i<=5;i++)
{
printf("%s\t%d\t%f\n",x[i].name,x[i].num,x[i].sal);
}
printf("\nDo you want to continue? y/n : ");
fflush(stdin);
scanf("%c",&ch);
}while(ch=='y'||ch=='Y');
getch();
}



















































































































































































