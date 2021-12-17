#include<iostream.h>
#include<fstream.h>
#include<iomanip.h>
#include<stdio.h>
#include<conio.h>


class student
{
 int rollno;
 char name[50];
 int p_marks,c_marks,m_marks,e_marks,cs_marks;
 float per;
 char grade;
 void calculate();
 public:
 void getdata();
 void showdata();
 void show_tabular();
 int retrollno();
};


void student::calculate()
{
 per=(p_marks+c_marks+m_marks+e_marks+cs_marks)/5.0;
 if(per>=85)
   grade='A';
 else if(per>=70)
   grade='B';
 else if(per>=55)
   grade='C';
 else if(per>=33)
   grade='D';
 else
   grade='F';
}


void student::getdata()
{
 cout<<"\nEnter the roll number of student:";
 cin>>rollno;
 cout<<"\nEnter the name of the student:";
 gets(name);
 cout<<"\nEnter the marks in physics out of 100:";
 cin>>p_marks;
 cout<<"\nEnter the marks in chemistry out of 100:";
 cin>>c_marks;
 cout<<"\nEnter the marks in maths out of 100:";
 cin>>m_marks;
 cout<<"\nEnter the marks in english out of 100:";
 cin>>e_marks;
 cout<<"\nEnter the marks in computer science out of 100:";
 cin>>cs_marks;
 calculate();
}


void student::showdata()
{
 cout<<"\n\n\tRoll number of student:"<<rollno;
 cout<<"\n\n\tName of student:"<<name;
 cout<<"\n\n\tMarks in physics:"<<p_marks;
 cout<<"\n\n\tMarks in chemistry:"<<c_marks;
 cout<<"\n\n\tMarks in maths;"<<m_marks;
 cout<<"\n\n\tMarks in english:"<<e_marks;
 cout<<"\n\n\tMarks in computer science:"<<cs_marks;
 cout<<"\n\n\tPercentage of student:"<<per;
 cout<<"\n\n\tGrade of student:"<<grade;
}


void student::show_tabular()
{
 cout<<setw(2)<<rollno<<" "<<setw(18)<<name<<setw(9)<<p_marks<<setw(5)<<
 c_marks<<setw(5)<<m_marks<<setw(5)<<e_marks<<setw(5)<<cs_marks<<setw(9)<<
 per<<" "<<setw(3)<<" "<<grade<<endl;
}


int student::retrollno()
{
 return rollno;
}


void write_student();
void add_student();
void display_all();
void display_sp(int);
void display_student(int);
void delete_student(int);
void class_result();
void result();
void intro();
void entry_menu();


void main()
{
 char ch;
 cout.setf(ios::fixed|ios::showpoint);
 cout<<setprecision(2);
 clrscr();
 intro();
  do
  {
   clrscr();
   cout<<"\n\n\nMAIN MENU:";
   cout<<"\n\n\t\t01.RESULT MENU";
   cout<<"\n\n\t\t02.ENTRY/EDIT MENU";
   cout<<"\n\n\t\t03.EXIT";

   cout<<"\n\n\nPlease select your option(1-3):";
   cin>>ch;
   switch(ch)
   {
    case '1':clrscr();
    result();
    break;

    case '2':clrscr();
    entry_menu();
    break;

    case '3':break;

    default:cout<<"\a";
   }
  }
 while(ch!='3');
}


void write_student()
{
 student st;
 clrscr();
 ofstream outFile;
 outFile.open("student.dat",ios::binary|ios::out);
 st.getdata();
 outFile.write((char*)&st,sizeof(student));
 outFile.close();
 cout<<"\n\nStudent record has been created";
 cin.ignore();
 getch();
}


void add_student()
{
 student st;
 clrscr();
 ofstream outFile;
 outFile.open("student.dat",ios::binary|ios::app);
 st.getdata();
 outFile.write((char*)&st,sizeof(student));
 outFile.close();
 cout<<"\n\nStudent record has been added to the Existing file";
 cin.ignore();
 getch();
}


void display_all()
{
 student st;
 ifstream inFile;
 inFile.open("student.dat",ios::binary);
 if(!inFile)
 {
  cout<<"File could not be opened! Press any Key.";
  getch();
  return;
 }
 cout<<"\n\n\n\t\tDISPLAY ALL RECORDS!\n\n";
 while(inFile.read((char*)&st,sizeof(student)))
 {
  st.showdata();
  cout<<"\n\n===============================\n";
 }
 inFile.close();
 getch();
}


void display_sp(int n)
{
 student st;
 ifstream inFile;
 inFile.open("student.dat",ios::binary);

 if(!inFile)
 {
  cout<<"File could not be opened!! Press any key.";
  getch();
  return;
 }

 int i=0;
 while(inFile.read((char*)&st,sizeof(student)))
 {
  if(st.retrollno()==n)
  {
   st.showdata();
   i=1;
  }
 }

 inFile.close();

 if(i==0)
 cout<<"\n\nRecord does not exist... Press any key.";
 getch();
}


void modify_student(int n)
{
 int found=0;
 student st;
 fstream File;
 File.open("student.dat",ios::binary|ios::in|ios::out);
 if(!File)
 {
  cout<<"File could not be opened! Press any key.";
  getch();
  return;
 }
 while(File.read((char*)&st,sizeof(student))&&found==0)
 {
  if(st.retrollno()==n)
  {
   cout<<"\n\nPlease enter the new details of student"<<endl;
   st.getdata();
   int pos=(-1)*sizeof(st);
   File.seekp(pos,ios::cur);
   File.write((char*)&st,sizeof(student));
   cout<<"\n\n\tRecord updated";
   found=1;
  }
 }
 File.close();
 if(found==0)
 cout<<"\n\nRecord not found";
 getch();
}


void delete_student(int n)
{
 student st;
 ifstream inFile;
 inFile.open("student.dat",ios::binary);
 if(!inFile)
 {
  cout<<"File could not be open!! Press any key.";
  getch();
  return;
 }
 ofstream outFile;
 outFile.open("Temp.dat",ios::out);
 inFile.seekg(0,ios::beg);
 while(inFile.read((char*)&st,sizeof(student)))
 {
  if(st.retrollno()!=n)
  {
   outFile.write((char*)&st,sizeof(student));
  }
 }
 outFile.close();
 inFile.close();
 remove("student.dat");
 rename("Temp.dat","student.dat");
 cout<<"\n\n\tRecord Deleted....";
 getch();
}


void class_result()
{
 student st;
 ifstream inFile;
 inFile.open("student.dat",ios::binary);
 if(!inFile)
 {
  cout<<"File could not be opened!! Press any key..";
  getch();
  return;
 }

 cout<<"\n\n\t\tALL STUDENTS RESULT\n\n";
 cout<<"=============================================\n";
 cout<<"R.No     Name    P  C  M  E  CS  %age  Grade"<<endl;
 cout<<"=============================================\n";

 while(inFile.read((char*)&st,sizeof(student)))
 {
  st.show_tabular();
 }
 getch();
 inFile.close();
}


void result()
{
 char ch;
 int rno;
 cout<<"\n\n\nRESULT MENU";
 cout<<"\n\n\n\t\t1. Class Result";
 cout<<"\n\n\t\t2. Student Report Card";
 cout<<"\n\n\t\t3. Back to main menu";
 cout<<"\n\n\nEnter Choice (1/2/3)";
 cin>>ch;
 clrscr();

 switch(ch)
 {
  case '1':class_result();
  break;
  case '2':cout<<"\n\nEnter roll number of student:";
  cin>>rno;
  display_sp(rno);
  break;
  case '3':break;
  default:cout<<"\a";
 }

}


void intro()
{
 cout<<"\n\n";
 cout<<"\t:****************************************************:\n";
 cout<<"\t:                                 :\n";
 cout<<"\t:      *****____STUDENT REPORT CARD____*****         :\n";
 cout<<"\t:                            :\n";
 cout<<"\t:                            :\n";
 cout<<"\t:                        :\n";
 cout<<"\t:                        :\n";
 cout<<"\t: PROGRAMMED BY :-                       :\n";
 cout<<"\t: _________________:\n";
 cout<<"\t:            Joel Johnson                :\n";
 cout<<"\t:                                 :\n";
 cout<<"\t:                                 :\n";
 cout<<"\t:            Std: XII  Div: A     :\n";
 cout<<"\t:                                 :\n";
 cout<<"\t:            Indian Educational School       :\n";
 cout<<"\t:                 Kuwait        :\n";
 cout<<"\t:                           :\n";
 cout<<"\t:****************************************************:\n";
 cout<<"\n\nPRESS ANY KEY TO ENTER THE MAIN MENU";
 getch();
}


void entry_menu()
{
 char ch;
 int num;
 clrscr();
 cout<<"\n\n\nENTRY MENU";
 cout<<"\n\n\n\t\t1. CREATE STUDENT RECORD";
 cout<<"\n\n\t\t2. ADD RECORDS (INSERTION)";
 cout<<"\n\n\t\t3. DISPLAY ALL STUDENTS RECORDS";
 cout<<"\n\n\t\t4. SEARCH STUDENT RECORD";
 cout<<"\n\n\t\t5. MODIFY STUDENT RECORD";
 cout<<"\n\n\t\t6. DELETE STUDENT RECORD";
 cout<<"\n\n\t\t7. BACK TO MAIN MENU";

 cout<<"\n\n\nPlease enter your choice (1-7):";
 cin>>ch;
 clrscr();

 switch(ch)
 {
  case '1':write_student();
  break;
  case '2':add_student();
  break;
  case '3':display_all();
  break;
  case '4':cout<<"\n\n\tPlease enter the roll number:";
  cin>>num;
  display_sp(num);
  break;
  case '5':cout<<"\n\n\tPlease enter the roll number:";
  cin>>num;
  modify_student(num);
  break;
  case '6':cout<<"\n\n\tPlease enter the roll number:";
  cin>>num;
  delete_student(num);
  break;
  case '7':break;
  default:cout<<"\a";
  entry_menu();
 }
}