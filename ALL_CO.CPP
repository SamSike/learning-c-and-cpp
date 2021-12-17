#include<stdio.h>
#include<conio.h>
#define pi 3.14
void triangle();
void square();
void rectangle();
void parallelogram();
void circle();
void add();
void sub();
void mul();
void div();
void c1();
void c2();
void amsng();
void age();
void prime();
void alf();
void array();
void draw();
void draw2();
void draw3();

int user,c;

void main()
{
printf("Eligiblity to marry-1, Prime numbers-2, Vowel/Consonant-3,\nArmstrong numbers-4, Arrays-5, Make triangles out of '*'-6");
scanf("%d",&c);
	if(c==1)
	{
	age();
	}

	if(c==2)
	{
	prime();
	}

	if(c==3)
	{
	alf();
	}

	if(c==4)
	{
	amsng();
	}
end:;
getch();
}

void age()
{
	char gdr;
	int age,yrs;
	printf("\nEnter your gender as Male : M or Female : F\n");
	scanf("%s",&gdr);
	printf("Enter your age : ");
	scanf("%d",&age);
		if (gdr=='M')
		{
			if (age>21)
			printf("You are eligible to be married");
			else
			yrs=21-age,
			printf("You have %d more years to be eligible to be married",yrs);
		}
		else
		{
			if (age>18)
			printf("You are eligible to be married");
			else
			yrs=18-age,
			printf("You have %d more years to be eligible to be married",yrs);
		}
goto end;
}

void prime()
{
int a,b,srt,en;
printf("\nEnter an integer for start of range - ");
scanf("%d",&srt);
printf("Enter an integer for end of range - ");
scanf("%d",&en);
en=en+1;
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
}while(srt<en);
goto end;
}

void alf()
{
char alf;
printf("\nEnter alphabet : ");
scanf("%c",&alf);
if (alf=='a'||alf=='e'||alf=='i'||alf=='o'||alf=='u'
  ||alf=='A'||alf=='E'||alf=='I'||alf=='O'||alf=='U')
printf("The alphabet entered is a vowel");
else
printf("The alphabet entered is a consonant");
goto end;
}

void amsng()
{
int c;
printf("\nCalculate if a number is an armstrong no. - Enter 0,\nCalculate all armstrong numbers within a range - Enter 1 : ");
scanf("%d",&c);
if(c==0)
{
c1();
}
if(c==1)
{
c2();
}
goto end;
}

void c1()
{
int srt,b,s,n;
printf("Enter number : ");
scanf("%d",&srt);
n=srt;
s=0;
while(n>0)
{
b=n%10;
n=n/10;
s=s+(b*b*b);
}
if(s==srt)
printf("\n%d is an armstrong number",srt);
else
printf("\n%d is not an armstrong number",srt);
goto end;
}

void c2()
{
int srt,end,b,s,n;
printf("Enter number for start of range : ");
scanf("%d",&srt);
printf("Enter number for end of range : ");
scanf("%d",&end);
end=end+1;
do
{
n=srt;
s=0;
while(n>0)
{
b=n%10;
n=n/10;
s=s+(b*b*b);
}
if(s==srt)
printf("%d\t",srt);
srt=srt+1;
}while(srt<end);
goto end;
}

void array()
{
int a[10],i,min,max,sum_e,sum_o;
sum_o=sum_e=max=0;

for(i=0;i<10;i++)
{
printf("Enter value : ");
scanf("%d",&a[i]);
min=a[0];
	if(a[i]%2==1)
	sum_o=sum_o+a[i];
	else
	sum_e=sum_e+a[i];

	if(a[i]<min)
	min=a[i];

	if(a[i]>max)
	max=a[i];
}
printf("Smallest no. - %d, \nLargest no. - %d, \nSum of all odd nos. - %d \nand Sum of all even nos. - %d",min,max,sum_o,sum_e);
goto end;
}
void draw2()
{
int num,num2,num3,num4;
num=0;
num2=9;
num3=0;
num4=1;
do
{
do
{
printf(" ");
num=num+1;
}while(num<num2);
do
{
num=0;
printf("*");
num3=num3+1;
}while(num3<num4);
num2=num2-1;
num3=0;
printf("\n");
num4=num4+1;
}while(num4<10);
goto end;
}

void draw()
{
int num,num2;
num=0;
num2=1;
do
{
do
{
printf("*");
num=num+1;
}while(num<num2);
num2=num2+1;
num=0;
printf("\n");
}while(num2<11);
goto end;
}

void forloop2()
{
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
goto end;
}
}

