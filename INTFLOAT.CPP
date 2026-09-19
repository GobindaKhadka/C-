//OOP to compare two integer and float number using function overloading
#include<iostream.h>
#include<conio.h>
    void great(int a,int b)
    {
     if(a>b)
     cout<<"\n  greater number is  :"<<a;
     else
     cout<<"\n  greater number is  :"<<b;
    }
    void great(float x,float y)
    {
     if(x>y)
     cout<<"\n  greater number is :"<<x;
     else
     cout<<"\n  greater number is  :"<<y;
    }
  void main()
  {
   int x,y;
   float a,b;
   clrscr();
   cout<<"\n Enter two numbers :";
   cin>>x>>y;
   cout<<"\n Enter two numbers :";
   cin>>a>>b;
   great(x,y);
   great(a,b);
   getch();
  }



