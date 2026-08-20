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
 base x,*ptr;
 child y;
 ptr=&x;
 ptr->func();
 ptr=&y;
 ptr->func();
 getch();
}