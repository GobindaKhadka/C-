//program to demonstrate parameterized constructor
#include<iostream.h>
#include<conio.h>
class integer
{
 private:
  int a,b;
 public:
  integer(int x,int y);
  void  display();
 };
 integer::integer(int x,int y)
 {
  a=x;
  b=y;
 }
 void integer::display()
 {
  cout<<" \n x ="<<a;
  cout<<"\n y ="<<b;
 }
 void main()
 {
  clrscr();
  integer A(20,30),B(14,53);
  cout<<"\n obj 1";
  A.display();
  cout<<"\n obj 2 :";
  B.display();
  getch();
 }



