// Concept of Overriding
#include<iostream.h>
#include<conio.h>
class base
{
 public:
	void func()
	{
	 cout<<"\n This is base class function";
	}
};
class child:public base
{
 public:
	void func()
	{
	 cout<<"\n This is derived class function";
	}
};
void main()
{
 clrscr();
 child x;
 x.base::func();
 x.func();
 getch();
}