//program to demonstrate constructor and deconstructor
#include<iostream.h>
#include<conio.h>
class book
{
public:
 book(){
  cout<<"\n Book Created";
 }
 ~book(){
  cout<<"\n Book Destroyed";
 }
};
void main()
{
 clrscr();
 book b;
 {
  book c;
  cout<<"\n This is inner book";
 }
 cout<<"\n This is main book";
 book d;
 getch();
}