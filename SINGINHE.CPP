//Single Inheritence(Public Derivaton)
#include<iostream.h>
#include<conio.h>
class base
{
 private:
  int a;
 public:
  void inputa()
  {
   cout<<"\n Enter the value of A:";
   cin>>a;
  }
  int geta()
  {
   return a;
  }
 };
  class child:public base
  {
   public:
    void showa()
    {
     cout<<"\n Value of a ="<<geta()<<endl;
    }
   };
   void main()
   {
    clrscr();
    child obj;
    obj.inputa();
    obj.showa();
    getch();
   }

