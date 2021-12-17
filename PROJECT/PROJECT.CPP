#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>

class Book
{
	long BNo,TNo,Issued;
	char Title[100],Author[100];
	float Price;
public:
	void Get(long temp=0)
	{
		clrscr();
		ifstream F("LIBRARY.DAT",ios::binary|ios::in);
		Book B;
		x1:
		if(temp==0){
			cout<<"\nEnter Book Number : ";
			cin>>BNo;		
			while(F.read((char*)&B,sizeof(B)))
				if(B.RBNo()==BNo){
					cout<<"This BNo is currently in use. Please Enter a unique BNo";
				goto x1;}
		else
			BNo=temp;
		cout<<"Enter Book Title : ";
		gets(Title);
		cout<<"Enter Author Name : ";
		gets(Author);
		cout<<"Enter Total Number of Books : ";
		cin>>TNo;
		x2:
		cout<<"Enter Number of Books Issued : ";
		cin>>Issued;
		if(Issued>TNo){
			cout<<"No of books issued can not be more than total no of books. Please Enter a valid number of Issued Books : \n";
			goto x2;}
		F.close();
	}
	void Show()
	{
		cout<<"\nBook Number : "<<BNo;
		cout<<"\nBook Title  : "<<Title;
		cout<<"\nAuthor Name : "<<Author;
		cout<<"\nTotal Number of Books : "<<TNo;
		cout<<"\nNumber of Books Issued : "<<Issued;
		cout<<"\nNumber of Books Available : "<<TNo-Issued; 
	}
	long RBNo(){return BNo;}
};
void Add()
{
	clrscr();
	ofstream F("LIBRARY.DAT",ios::binary|ios::app);
	Book B;
	B.Get();
	F.write((char*)&B,sizeof(B));
	F.close();
	
}
void Search(long temp)
{
	clrscr();
	ifstream F("LIBRARY.DAT",ios::binary|ios::in);
	Book B;
	int k=0;
	while(F.read((char*)&B,sizeof(B)))
		if(B.RBNo()==temp){
			B.Show();
			k++;}
	if(k==0)
		cout<<"\nBook Not Found";
	F.close();
}
void Display()
{
	clrscr();
	ifstream F("LIBRARY.DAT",ios::binary|ios::in);
	Book B;
	while(F.read(char*)&B,sizeof(B)){
		cout<<"\nBook Number "<<1+(F.tellg()/sizeof(B))<<" : \n";
		B.Show();
		cout<<"\nPress any key to continue : ";
		getch();
		clrscr();}
	F.close();
}
void Modify(long temp)
{
	clrscr();
	fstream F(“LIBRARY.DAT”,ios::binary|ios::in|ios::out);
	Book B;
	int k=0;
	char ch;
	while(F.read((char*)&B,sizeof(B)))
	     if(B.RBNo()==temp)
		{
			B.Show();
			cout<<"\nAre you sure you want to modify the records of this book? y/n : ";
			cin>>ch;
			clrscr();
			if(ch=='n'||ch=='N'){
				k++;
				break;}
			B.Get(temp);
			F.write((char*)&B,sizeof(B)));
			k++;
		}
	if(k==0)
		cout<<”\nNot found”;
	F.close();
}
void Delete(long temp)
{
	clrscr();
	ifstream F(“LIBRARY.DAT”,ios::binary|ios::in);
	ofstream G(“TEMP.DAT”,ios::binary|ios::out);
	Book B;
	int k=0;
	while(F.read((char*)&B,sizeof(B)))
	{
	    if(B.RBNo()!=temp)
			G.write((char*)&B,sizeof(B)))
	    else{
			B.Show();
			cout<<"\nAre you sure you want to delete the records of this book? y/n : ";
			cin>>ch;
			if(ch=='n'||ch=='N')
				G.write((char*)&B,sizeof(B))
			k++;}
	}
	if(k==0)
		cout<<”\nBook Not Found”;
    F.close();
    G.close;
    remove(“LIBRARY.DAT”);
    rename(“TEMP.DAT”,”LIBRARY.DAT”);
}


void main(){
	Book B1;
	int ch;
	long temp;
	char ch1;
	do{
		clrscr();
		cout<<"Enter Number corresponding to choice\n";
		cout<<"1.Add\n2.Display\n3.Modify\n4.Search\n5.Delete\n";
		cin>>ch;
		switch(ch){
			case 1:
				Add();
				break;
			case 2:
				Display();
				break;
			default:
				cout<<"Enter Book Number : ";
				cin>>temp;
		}
		switch(ch){
			case 3:
				Modify(temp);
				break;
			case 4:
				Search(temp);
				break;
			case 5:
				Delete(temp);
				break;
		}
		cout<<"Do you want to continue? y/n : ";
		cin>>ch1;
	}while(ch1=='y'||ch1=='Y');
}