// Concept of Run-time (or Dynamic) Polymorphism or Late binding
#include<iostream.h>
#include<conio.h>
class base
{
 public:
	virtual void func()
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
 base x;
 base *ptr;   // Base class pointer
 child y;
 ptr=&x;        // Base class pointer pointing to base class object
 cout<<"\n Base class pointer pointing to base class object";
 ptr->func();
 ptr=&y;       // Base class pointer pointing to derived class object
 cout<<"\n Base class pointer pointing to derived class object";
 ptr->func();
 getch();
}