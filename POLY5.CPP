// Concept of Pure Virtual Function
#include<iostream.h>
#include<conio.h>
class base
{
 public:
	virtual void func()=0;	// Pure Virtual Function
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
 base *ptr;   // Base class pointer
 child y;
 ptr=&y;       // Base class pointer pointing to derived class object
 cout<<"\n\n Base class pointer pointing to derived class object";
 ptr->func();
 getch();
}