#include<iostream.h>
#include<conio.h>
class mean
{
 int x,y;
 public:
  void input()
  {
   cout<<"\n Enter the value of x and y :";
   cin>>x>>y;
  }
  friend float result(mean m)
  {
   return(float (m.x)+float (m.y))/2;
  }
 };
 void main()
 {
  mean obj;
  clrscr();
  obj.input();
  cout<<"\n Mean Value ="<<result(obj);
  getch();
 }