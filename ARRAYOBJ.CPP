//Array of Object
#include<iostream.h>
#include<conio.h>
class employee
{
 private:
      int id;
      char name[50];
      int salary;
 public:
      void input(){
      cout<<"\n Enter ID Name and Salary of the Employee";
      cin>>id>>name>>salary;
      }
      void display(){
      cout<<"\t ID ="<<id;
      cout<<"\t Name ="<<name;
      cout<<"\n Salary ="<<salary;
      }
 };
 void main()
 {
 employee e[3];
 int i;
 clrscr();

 //Loop
 for(i=0;i<3;i++)
 e[i].input();

 cout<<"\n Employee Details :\n";

 //Loop
 for(i=0;i<3;i++)
   e[i].display();

   getch();
 }

