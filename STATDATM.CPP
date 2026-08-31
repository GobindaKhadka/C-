//concept of static data members
#include<iostream.h>
#include<conio.h>
class example
{
 private:
    int x,y;
    static int count;
 public:
    void getdata()
    {
     cout<<"\n Enter two values :";
     cin>>x>>y;
     count++;
    }
    void putdata()
    {
     cout<<"\n Count = "<<count<<"\t x  =  "<<x<<"\t y  =  "<<y<<endl;
    }
 };
 int example::count;
 void main()
 {
  example A,B;
  clrscr();
  A.getdata();
  A.putdata();
  B.getdata();
  B.putdata();
  getch();
 }

