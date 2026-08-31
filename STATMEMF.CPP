//Concept of static member function
#include<iostream.h>
#include<conio.h>
class example
{
 private:
   int x,y;
   static int count;
 public:
  static void getcount()
  {
   count++;
  }
  static int showcount()
  {
   return(count);
  }
  void getdata()
  {
   cout<<"\n ENter two values:";
   cin>>x>>y;
  }
  void putdata()
  {
   cout<<"\n x ="<<x<<"\t y="<<y<<endl;
  }
 };
 int example::count;
 void main()
 {
  example A,B;
  clrscr();
  A.getdata();
  A.putdata();
  cout<<"\n COunt = "<<example :: showcount();
  example::getcount();
  cout<<"\n Count = "<<example :: showcount();
  B.getdata();
  B.putdata();
  cout<<"\n Count ="<<example :: showcount();
  example::getcount();
  cout<<"\n Count ="<<example :: showcount();
  getch();
 }
