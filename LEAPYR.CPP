//program to check leap year
#include<iostream.h>
#include<conio.h>
void main()
{
 int year;
 clrscr();
 cout<<"\n ENter a year :";
 cin>>year;
 if((year % 400 == 0)||(year%4==0 && year%100 !=0))
 {
  cout<<year<<" is a leap year";
 }
 else
 {
  cout<<year<<" is not a leap year";
 }
 getch();
}