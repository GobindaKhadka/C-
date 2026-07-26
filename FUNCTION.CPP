//Function Overloading
#include<iostream.h>
#include<conio.h>
class function
{
 public:
       int add(int a,int b)
       {
	return a*b;
	}
	int add(int a,int b,int c)
	{
	return a*b*c;
	}
	float add(float a,float b)
	{
	return a*b;
	}
};
void main(){
function f;
clrscr();
cout<<" sum of 10 and 20 is " <<f.add(10,20)<<endl;
cout<<"\n sum of 10,20 and 30 is "<<f.add(10,20,30)<<endl;
cout<<"\n sum of 8.5 and 9.5 is "<<f.add(8.5f,9.5f)<<endl;
getch();
}

