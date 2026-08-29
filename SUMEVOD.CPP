//Program to determine sum of odd numbers and eeven numbers seperately
#include<iostream.h>
#include<conio.h>
void main()
{
 int x[20],n,i,e=0,o=0;
 clrscr();
 cout<<"\n how many numbers...???";
 cin>>n;
 cout<<"\n Enter  the numbers below :";
 for(i=1;i<=n;i++)
 {
  cin>>x[i];
 }
 for(i=1;i<=n;i++)
 {
 if (x[i]%2==0)
 {
  e=x[i]+e;
 }
 else
  o=x[i]+o;
 }
 cout<<"\n sum of even numbers is "<<e;
 cout<<"\n sum of odd numbers is "<<o;
 cout<<"\n sum of even and odd nunmbers is "<<e+o;
 getch();
 }
