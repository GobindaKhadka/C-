//Inline Function
//Program to determine Greatest Number
#include<iostream.h>
#include<conio.h>

     inline int greater(int a,int b)
     {
     if (a>b)
     return a;
     else
     return b;
     }

void main()
{
 int x,y;
 clrscr();
 cout<<"\n Enter two numbers :";
 cin>>x>>y;
 cout<<"\n The greater number is :"<<greater(x,y);
 getch();
 }
