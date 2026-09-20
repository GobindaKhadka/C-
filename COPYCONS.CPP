//Copy constructor
#include<iostream.h>
#include<conio.h>
#include<string.h>
class sample
{
 private:
      int roll,marks;
 public:
      sample(){
      marks=0;
      roll=0;
      }
      sample(int x,int y);
      sample(sample &i);
      void display(){
	cout<<"\n roll no  ="<<roll;
	cout<<"\n marks ="<<marks;
	}
 };
 sample::sample(int x,int y)
 {

  roll=x;
  marks=y;
 }
 sample::sample(sample &i)
 {
  roll=i.roll;
  marks=i.marks;
 }
void main()
{
  clrscr();
  sample A(10,90);
  sample B;
  B.display();
  B=A;
  A.display();
  B.display();
  getch();
}

