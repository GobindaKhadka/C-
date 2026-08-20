// Concept of Run-time (or Dynamic) Polymorphism or Late binding
#include<iostream.h>
#include<conio.h>
class base
{
 public:
	virtual void func1()
	{
	 cout<<"\n This is base class function-1";
	}
	virtual void func2()
	{
	 cout<<"\n This is base class function-2";
	}
};
class child:public base
{
 public:
	void func1()
	{
	 cout<<"\n This is derived class function-1";
	}
	void func2()
	{
	 cout<<"\n This is derived class function-2";
	}

};
void main()
{
 clrscr();
 base x;
 base *ptr;   // Base class pointer
 child y;
 ptr=&x;        // Base class pointer pointing to base class object
 cout<<"\n\n Base class pointer pointing to base class object";
 ptr->func1();
 ptr->func2();
 ptr=&y;       // Base class pointer pointing to derived class object
 cout<<"\n\n Base class pointer pointing to derived class object";
 ptr->func1();
 ptr->func2();
 getch();
}