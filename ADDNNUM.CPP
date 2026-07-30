//program to add n input numbers
#include<iostream.h>
#include<conio.h>
 void main()
 {
 int n,i,num,sum=0;
  clrscr();
	cout<<"\n how many numbers to add:";
	cin>>n;
    for(i=1;i<=n;i++)
    {
    cout<<"\n Enter a number :"<<i<<" :";
    cin>>num;
    sum=sum+num;
    }
    cout<<"\n sum is :"<<sum;
  getch();
 }

