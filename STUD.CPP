#include<iostream.h>
#include<conio.h>
#include<fstream.h>

class STUDENT{
	int Rno;
	char name[20];
  public:
	void EnterData(){
	 cin>>Rno;
	 cin.getline(name,20); }
	void ShowData(){ cout<<Rno<<" - "<<name<<endl;} };

void main(){
	STUDENT S;
	fstream F("STUDENTS.DAT",ios::binary|ios::app);
	cout<<F.tellg();
	F.close();
	getch();
}