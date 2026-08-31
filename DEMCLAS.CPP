//Program to demonstrate two classes
#include<iostream.h>
#include<conio.h>
class second;
class first
{
 private:
  int a;
 public:
  void input()
  {
   cout<<"\n Enter a number :";
   cin>>a;
  }
  void show()
  {
  cout<<"\n First Number :"<<a;
  }
  friend int great(first,second);
 };
 class second
{
 private:
  int b;
 public:
  void input()
  {
   cout<<"\n Enter another number :";
   cin>>b;
  }
  void show()
  {
  cout<<"\n First Number :"<<b;
  }
  friend int great(first,second);
 };
 void main()
 {
  first x;
  second y;
  x.input();
  y.input();
  x.show();
  y.show();
  cout<<"\n Greatest Number is :"<<great(x,y);
  getch();
}
  int great(first x,second y)
  {
   if(x.a>y.b)
    return x.a;
   else
   return y.b;
  }