//program to check whether a number is divisible by 5 and 10
#include<iostream.h>
#include<conio.h>
void main()
{
 int n;
 cout<<"\n Enter a number :";
 cin>>n;

 if(n%5==0&&n%11==0)
  cout<<"\n Number is divisible by 5 and 11";
 else
  cout<<"\n Number is not divisible by 5 and 11";
 getch();
}