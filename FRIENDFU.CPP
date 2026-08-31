//Example of Friend function
#include<iostream.h>
#include<conio.h>
class demo
{
 private:
  int x;
 public:
  //int x;
  void input()
  {
   cout<<"\n Enter the value of x =";
   cin>>x;
  }
  friend void show(demo d)
  {
   cout<<"\n Value of x ="<<d.x<<endl;
  }
 };
 void main()
 {
  demo obj;
  clrscr();
  obj.input();
  show(obj);
  getch();
 }