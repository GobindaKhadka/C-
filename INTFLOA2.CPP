#include<iostream.h>
#include<conio.h>
void swap(int a,int b)
{
 int c=0;
 c=a;
 a=b;
 b=c;
 cout<<"\n a="<<a;
 cout<<"\n b="<<b;
}
void swap(float a,float b)
{
 float c=0;
 c=a;
 a=b;
 b=c;
 cout<<"\n a="<<a;
 cout<<"\n b="<<b;
}
void main()
{
 int a,b;
 float x,y;
 clrscr();
 cout<<"\n ENter two nummbers:";
 cin>>a>>b;
 cout<<"\n Enter two floating numbers :";
 cin>>x>>y;
 swap(a,b);
 swap(x,y);
 getch();
}
