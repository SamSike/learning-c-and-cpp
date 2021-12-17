#include<stdio.h>
#include<conio.h>
void main()
{
	char name[30],ch,crt1,crt2;
	int roll,marks=0;
	clrscr();
	printf("Enter Name : ");
	gets(name);
	printf("Enter Roll Number : ");
	scanf("%d",&roll);
	clrscr();
	printf("MCQ Test For Computers\n");
	printf("Enter the letter corresponding to Correct option\n");
	printf("1. Which option is not in the Data Menu in MS Excel? ");
	printf("\nA. Validation\nB. Filter\nC. Freeze Pane\nD. Sort\n");
	scanf("%c",&ch);
	crt1='C';
	crt2='c';
	if(ch==crt1||ch==crt2)
		marks++;
	printf("2. Which of the options is in the Tool Menu in MS Excel?");
	printf("\nA. Formula Auditing\nB. Goal Seek\nC. Scenarios\nD. All of the above\n");
	scanf("%c",&ch);
	crt1='D';
	crt2='d';
	if(ch==crt1||ch==crt2)
		marks++;
	printf("3. What is the shortcut key to insert current date in cell?");
	printf("\nA. Ctrl + ;\nB. Ctrl + T\nC. Ctrl + D\nD. Ctrl + /\n");
	scanf("%c",&ch);
	crt1='A';
	crt2='a';
	if(ch==crt1||ch==crt2)
		marks++;
	printf("4. In MS Excel, if Day formula is imposed, answer to 5/3/2019 will be printed as:");
	printf("\nA. 5\nB. 3\nC. 2019\nD. 5 Mar\n");
	scanf("%c",&ch);
	crt1='B';
	crt2='b';
	if(ch==crt1||ch==crt2)
		marks++;
	printf("5. Which of these is not an operator in MS Excel?");
	printf("\nA. Text Concatenation Operator\nB. Reference Operator\nC. Arithmetic Operator\nD. Logical Operator\n");
	scanf("%c",&ch);
	crt1='D';
	crt2='d';
	if(ch==crt1||ch==crt2)
		marks++;
	printf("6. How many steps are there to create charts in MS Excel?");
	printf("\nA. 2\nB. 3\nC. 4\nD. 5\n");
	scanf("%c",&ch);
	crt1='C';
	crt2='c';
	if(ch==crt1||ch==crt2)
		marks++;
	printf("7. What is the shortcut key to insert a new sheet in the current workbook?");
	printf("\nA. F11\nB. Ctrl + F11\nC. Shift + F11\nD. Alt + F11\n");
	scanf("%c",&ch);
	crt1='C';
	crt2='c';
	if(ch==crt1||ch==crt2)
		marks++;
	printf("8. How can you show or hide the Grid lines in Excel sheet?");
	printf("\nA. Go to Tools – Options – View Tab, then mark or unmark the Grid Line Box\nB. Click on the Grid Line Tool in the Forms Toolbar\nC. Both A and B\nD. None of the above\n");
	scanf("%c",&ch);
	crt1='A';
	crt2='a';
	if(ch==crt1||ch==crt2)
		marks++;
	printf("9. The shortcut key to add Hyperlink in worksheet is:");
	printf("\nA. Alt + K\nB. Ctrl + H\nC. Ctrl + K\nD. Shift + Ctrl + K\n");
	scanf("%c",&ch);
	crt1='C';
	crt2='c';
	if(ch==crt1||ch==crt2)
		marks++;
	printf("10. What is the shortcut to open the dialog box of Format cell?");
	printf("\nA. Alt + 1\nB. Ctrl + 1\nC. Ctrl + Shift + 1\nD. None of the above\n");
	scanf("%c",&ch);
	crt1='B';
	crt2='b';
	if(ch==crt1||ch==crt2)
		marks++;
	printf("11. In which programming language does Excel keep macro code record?");
	printf("\nA. Java\nB. Visual Basic\nC. Basic\nD. C++\n");
	scanf("%c",&ch);
	crt1='B';
	crt2='b';
	if(ch==crt1||ch==crt2)
		marks++;
	printf("12. The default extension of Excel 2003 file is:");
	printf("\nA. .xls\nB. .xlsx\nC. .xlx\nD. .xlsm\n");
	scanf("%c",&ch);
	crt1='A';
	crt2='a';
	if(ch==crt1||ch==crt2)
		marks++;
	printf("13. What is the shortcut key to replace in MS Excel?");
	printf("\nA. Ctrl + R\nB. Ctrl + E\nC. Ctrl + H\nD. Ctrl + L\n");
	scanf("%c",&ch);
	crt1='C';
	crt2='c';
	if(ch==crt1||ch==crt2)
		marks++;
	printf("14. Which menu is used to show and hide the Status Bar in Excel?");
	printf("\nA. Edit Menu\nB. Review Menu\nC. View Menu\nD. Format Menu\n");
	scanf("%c",&ch);
	crt1='C';
	crt2='c';
	if(ch==crt1||ch==crt2)
		marks++;
	printf("15. The keyboard shortcut is used to create charts in the selected range:");
	printf("\nA. F2\nB. F4\nC. F8\nD. F11\n");
	scanf("%c",&ch);
	crt1='D';
	crt2='d';
	if(ch==crt1||ch==crt2)
		marks++;
	printf("16. Which key is used to drag data of range from selected worksheet to another worksheet?");
	printf("\nA. Tab\nB. Shift\nC. Alt\nD. Ctrl\n");
	scanf("%c",&ch);
	crt1='C';
	crt2='c';
	if(ch==crt1||ch==crt2)
		marks++;
	printf("17. Which column would you select to insert a new column between columns D and E?");
	printf("\nA. Column E\nB. Column D\nC. Columns E,F,G\nD. Columns D,E,F\n");
	scanf("%c",&ch);
	crt1='A';
	crt2='a';
	if(ch==crt1||ch==crt2)
		marks++;
	printf("18. How many columns are there in Excel?");
	printf("\nA. 256\nB. 65536\nC. 216\nD. 220\n");
	scanf("%c",&ch);
	crt1='A';
	crt2='a';
	if(ch==crt1||ch==crt2)
		marks++;
	printf("19. Which menu has Freeze Pane option?");
	printf("\nA. Tools\nB. Data\nC. Window\nD. View\n");
	scanf("%c",&ch);
	crt1='C';
	crt2='c';
	if(ch==crt1||ch==crt2)
		marks++;
	printf("20. How do you insert a row?");
	printf("\nA. Right click the row heading where you want to insert the new row and select Insert from the shortcut menu\nB. Select the row heading where you want to insert the new row and select Edit>Row from the menu\nC. Select the row heading where you want to insert the new row and click the Insert Row button on the standard toolbar\nD. All of the above\n");
	scanf("%c",&ch);
	crt1='A';
	crt2='a';
	if(ch==crt1||ch==crt2)
		marks++;
	printf("21. Comments put in cells in MS Excel are called:");
	printf("\nA. Smart tip\nB. Pro tip\nC. Cell tip\nD. Comment tip\n");
	scanf("%c",&ch);
	crt1='C';
	crt2='c';
	if(ch==crt1||ch==crt2)
		marks++;
	printf("22. On an Excel sheet the active cell is indicated by:");
	printf("\nA. A dotted border\nB. Italic Text\nC. Dark Wide Border\nD. Blinking Border\n");
	scanf("%c",&ch);
	crt1='C';
	crt2='c';
	if(ch==crt1||ch==crt2)
		marks++;
	printf("23. Formula palette is used to:");
	printf("\nA. Format cells containing numbers\nB. Create and Edit formulas containing functions\nC. Enter data through assumptions\nD. Autofill\n");
	scanf("%c",&ch);
	crt1='B';
	crt2='b';
	if(ch==crt1||ch==crt2)
		marks++;
	printf("24. To open an existing workbook, click the Open button on which toolbar?");
	printf("\nA. Form\nB. Standard\nC. Edit\nD. Formatting\n");
	scanf("%c",&ch);
	crt1='B';
	crt2='b';
	if(ch==crt1||ch==crt2)
		marks++;
	printf("25. What term describes a background that appears as a grainy, non-smooth surface?");
	printf("\nA. Pattern\nB. Gradient\nC. Velvet\nD. Texture\n");
	scanf("%c",&ch);
	crt1='B';
	crt2='b';
	if(ch==crt1||ch==crt2)
		marks++;
	clrscr();
	printf("Score:\nName : ");
	puts(name);
	printf("Marks : %d",marks);
	getch();
}