//Multiple Inheritence
#include<iostream.h>
#include<conio.h>
class base1
{
 protected:
  int a;
  public:
   void inputa()
   {
    cout<<"\n Enter the value of A :";
    cin>>a;
   }
  };
  class base2
  {
   protected:
    int b;
   public:
    void inputb()
    {
     cout<<"\n Enter the value of B :";
     cin>>b;
    }
   };
   class child:public base1,public base2
   {
    private:
     int c;
    public:
     void add()
     {
      c=a+b;
     }
     void display()
     {
      cout<<"\n value of A ="<<a;
      cout<<"\n Value of B ="<<b;
      cout<<"\n Resultant Value ="<<c;
     }
    };
    void main()
    {
     clrscr();
     child obj;
     obj.inputa();
     obj.inputb();
     obj.add();
     obj.display();
     getch();
    }