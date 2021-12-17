#include<stdio.h>
#include<conio.h>
int main()
{
	char sentence[1000];
	FILE *fptr;
	fptr = fopen("program.txt","w");
	clrscr();
	if(fptr==NULL)
	{
		printf("Error!");
		exit(1);
	}

	printf("Enter a sentence : ");
	gets(sentence);

	fprintf(fptr,"%s",sentence);
	fclose(fptr);
	return(0);
}









































































































































































