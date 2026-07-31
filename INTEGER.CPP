//program to check whether a number is positive,negative or zero
#include<iostream.h>
#include<conio.h>
void main()
{
 int n;
 clrscr();

 cout<<"\n Enter a number: ";
 cin>>n;

 if(n>0)
  cout<<"\n Positive Number";
 else if (n<0)
  cout<<"\n Negative number ";
 else
  cout<<"\n Zero";
 getch();
}
