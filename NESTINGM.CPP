//Nesting of member function
#include<iostream.h>
#include<conio.h>
class math
{
 private:
  int a,b;
 public:
  void input(){
   cout<<"\n Enter two numbers : ";
   cin>>a>>b;
   }
  int sum(){
   return(a+b);
   }
  int diff(){
   return(a-b);
   }
  int prod(){
   return(a*b);
   }
  void display(){
   cout<<"\n sum = "<<sum();
   cout<<"\n difference ="<<diff();
   cout<<"\n product ="<<prod();
   }
 };
 void main()
 {
  math x;
  clrscr();
  x.input();
  x.display();
  getch();
 }



