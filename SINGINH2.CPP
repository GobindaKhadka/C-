//Single inheritance(private derivation)
#include<iostream.h>
#include<conio.h>
class base
{
 private:
  int a;
 public:
  void input()
  {
   cout<<"\n Enter a number :";
   cin>>a;
  }
  int geta()
  {
   return a;
  }
 };
 class child :private base
 {
  public:
   void show()
   {
    input();
    cout<<"\n Value of a = "<<geta() <<endl;
   }
  };
  void main()
  {
   clrscr();
   child obj;
   obj.show();
   getch();
  }