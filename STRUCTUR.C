//STRUCTure//
#include<stdio.h>
#include<conio.h>
struct student
{
int marks;
char name[20];
};
void main()
{
char ch;
do
{
struct student m[5];
int i,avg=0;
clrscr();
for(i=0;i<5;i++)
{
printf("Add name : ");
fflush(stdin);
gets(m[i].name);
printf("Add marks : ");
fflush(stdin);
scanf("%d",&m[i].marks);
}
for(i=0;i<5;i++)
{
printf("Name:%s\tMarks:%d\n",m[i].name,m[i].marks);
avg=avg+m[i].marks;
}
avg=avg/5;
printf("%d is avg marks",avg);
printf("\nDo you want to continue? y/n : ");
fflush(stdin);
scanf("%c",&ch);
}while(ch=='y'||ch=='Y');
getch();
}



















































































































































































