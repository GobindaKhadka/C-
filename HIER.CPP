//Example of hierarchial inheritance
#include<iostream.h>
#include<conio.h>
class data
{
 protected:
   int a,b;
 public:
   void getdata()
   {
    cout<<"\n Enter tw digits:";
    cin>>a>>b;
   }
 };
class add:public data
{
 public:
   void sum()
   {
    cout<<"\n Sum is :"<<a+b<<endl;
   }
};
class sub:public data
{
 public:
   void dif(){
    cout<<"\n Difference is :"<<a-b<<endl;
   }
};
void main()
{
 add a;
 sub s;
 clrscr();
 a.getdata();
 s.getdata();
 a.sum();
 s.dif();
 getch();
}