#include<iostream.h>
#include<conio.h>
class code
{
 int id;
public:
 code() //Default Constructor
 {
  id=0;
 }
 code(int a) //parameterized constructor
 {
  id=a;
 }
  code(code &x) //copy constructor
  {
   id=x.id;
  }
  void display()
  {
   cout<<"ID="<<id<<endl;
  }
 };
void main()
{
 code A; //D.C. called
 code B(A); //C.C called
 code C=A; //C.C called
 code D(10); //p.c called
 code E; //D.C called
 E=D; //copy constructor called
 cout<<"\n Object A ";
 A.display();
 cout<<" Object B";
 B.display();
 cout<<" Object C ";
 C.display();
 cout<<" Object D";
 D.display();
 cout<<" Object E ";
 E.display();
 getch();
}