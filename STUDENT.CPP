//progrsam to write the status of students
#include<iostream.h>
#include<fstream.h>
#include<conio.h>
class student
{
 private:
       int roll;
       char name[80];
       int sem_fee;
 public:
       void getdata()
       {
	   cout<<"\n Enter the name ,roll and sem fee:";
	   cin>>name>>roll>>sem_fee;
       }
       void showdata()
       {
	cout<<"\n ROllno"<<roll<<endl;
	cout<<"naME:"<<name<<endl;
	cout<<"sem fee"<<sem_fee<<endl;
	cout<<"...................."<<endl;
       }
 };
void main()
{
 student s;
 ofstream outf("student.txt");
 clrscr();
 for(int i=0;i<10;i++)
 {
 cout<<"\n Enter details of student:";
 s.getdata();
 outf.write((char*)&s,sizeof(s));
 }
 outf.close();
 ifstream inf("student.txt");
 cout<<"\n students recorsds";
 while (inf.read((char*)&s,sizeof(s))){

  s.showdata();
 }
 inf.close();
 getch();
}