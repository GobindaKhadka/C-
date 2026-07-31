//Nested if Example
#include<iostream.h>
#include<conio.h>
void main()
{
 int age;
 char citizen;
 clrscr();

 cout<<"\n Age : ";
 cin>>age;

 cout<<"\n Citizen (Y/N): ";
 cin>>citizen;

 if(age>=18)
 {
   if(citizen =='Y')
       cout<<"\n Enligible to vote";
   else
       cout<<"\n Not a citizen";
 }
 else
 {
  cout<<"\n Underage";
 }
 getch();
}