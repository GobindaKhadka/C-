//member function definition outside the main
#include<iostream.h>
#include<conio.h>
class student
{
 private:
    int roll;
    char name[20];
    int marks;
 public:
     void input();
     void display();
 };
      void student::input()
     {
      cout<<"\nEnter the roll no ,name and marks of the student..::";
      cin>>roll>>name>>marks;
     }
     void student::display()
     {
      cout<<"\t roll no ="<<roll;
      cout<<"\t name ="<<name;
      cout<<"\t marks ="<<marks;
     }
 void main()
 {
  student s;
  clrscr();
  s.input();
  s.display();
  getch();
 }