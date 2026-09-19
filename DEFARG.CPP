//Example of default argument
#include<iostream.h>
#include<conio.h>
int sum(int a,int b=5)
{
 return(a+b);
}
void main()
{
clrscr();
cout<<"\n sum ="<<sum(4,6);
cout<<"\n sum ="<<sum(10);
getch();
}
