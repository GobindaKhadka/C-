//Overloading unary minus(-)operator by means of member function.
#include<iostream.h>
#include<conio.h>
class minus
{
 private:
	 int val;
 public:
	void getvalue(){
	cout<<"\t Enter a value :";
	cin>>val;
	}
	void show(){
	cout<<"\t value ="<<val;
	}
	void operator-()
	{
	 val=-val;
	}
 };
 void main()
 {
  clrscr();
  minus A,B,C;
  cout<<"\n For Object A:"; A.getvalue();
  cout<<"\n For Object B:"; B.getvalue();
  cout<<"\n For Object C:"; C.getvalue();
  cout<<"\n\n Before Overloading....";
  cout<<"\n In object A: "; A.show();
  cout<<"\n In object B: "; B.show();
  cout<<"\n In object C: "; C.show();
  -A;
  -B;
  -C;
  cout<<"\n\n After Overloading...";
  cout<<"\n In Object A : "; A.show();
  cout<<"\n In Object B : "; B.show();
  cout<<"\n In Object C : "; C.show();
  getch();
 }

