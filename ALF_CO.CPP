#include <stdio.h>
#include <conio.h>
void main()
{
clrscr();
char alf;
printf("Enter alphabet : ");
scanf("%c",&alf);
if (alf=='a'||alf=='e'||alf=='i'||alf=='o'||alf=='u'
  ||alf=='A'||alf=='E'||alf=='I'||alf=='O'||alf=='U')
printf("The alphabet entered is a vowel");
else
printf("The alphabet entered is a consonant");
getch();
}