//program to swap integer and float number using template function
#include<iostream.h>
#include<conio.h>
template<class T>
void swap(T &a,T &b)
{
 T temp;
 temp=a;
 a=b;
 b=temp;
}
void main()
{
 int x,y;
 float m,n;
 clrscr();
 cout<<"\n ENter teo integer number:";
 cin>>x>>y;
  cout<<"\n ENter two floating number:";
 cin>>m>>n;
 cout<<" before swapping :" ;
 cout<<"\n x ="<<x<<"\t y="<<y<<endl;
 cout<<"\n m ="<<m<<"\t n="<<n<<endl;
 swap(x,y);
 swap(m,n);
  cout<<" after swapping :" ;
 cout<<"\n x ="<<x<<"\t y="<<y<<endl;
 cout<<"\n m ="<<m<<"\t n="<<n<<endl;
 getch();
}
