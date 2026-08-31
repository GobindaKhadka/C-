//member function definition inside the main
#include<iostream.h>
#include<conio.h>
class student
{
 private:
    int roll;
    char name[20];
    int marks;
 public:
     void input()
     {
      cout<<"\nEnter the roll no ,name and marks of the student..::";
      cin>>roll>>name>>marks;
     }
     void display()
     {
      cout<<"\t roll no ="<<roll;
      cout<<"\t name ="<<name;
      cout<<"\t marks ="<<marks;
     }
 };
 void main()
 {
  student s;
  clrscr();
  s.input();
  s.display();
  getch();
 }
