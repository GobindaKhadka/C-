//oop to sort using template function
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
template<class X>
void sort(int n,X s[])
{
 int i,j;
 for(i=0;i<n-1;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(s[i]>s[j])
   {
    swap(s[i],s[j]);
   }
  }
 }
}
void main()
{
  int x[50],n,i;
  float m[50];
  clrscr();
  cout<<"\n HOw many numbers to sort..??";
  cin>>n;
  cout<<"\n ENter integer number:";
  for(i=0;i<n;i++)
  cin>>x[i];
  cout<<"\n ENter floating number:";
  for(i=0;i<n;i++)
  cin>>m[i];
  sort(n,x);
  sort(n,m);
  cout<<" after sorting :" ;
  for(i=0;i<n;i++)
  {
    cout<<"\n x ="<<x[i];
    cout<<"\n M ="<<m[i];
  }
  cout<<"\n Largest integer is:"<<x[n-1];
  cout<<"\n LArgest integer is :"<<m[n-1];
getch();
}
