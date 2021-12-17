#include <stdio.h>
#include <conio.h>
void main()
{
char a;
clrscr();
printf("Enter alphabet");
scanf("%c",&a);
switch(a)
{
	case 'a':
	printf("It is a vowel");
	break;
	case 'A':
	printf("It is a vowel");
	break;
	case 'e':
	printf("It is a vowel");
	break;
	case 'E':
	printf("It is a vowel");
	break;
	case 'i':
	printf("It is a vowel");
	break;
	case 'I':
	printf("It is a vowel");
	break;
	case 'o':
	printf("It is a vowel");
	break;
	case 'O':
	printf("It is a vowel");
	break;
	case 'u':
	printf("It is a vowel");
	break;
	case 'U':
	printf("It is a vowel");
	break;
	default case:
	printf("It is a consonant");
}
getch();
}