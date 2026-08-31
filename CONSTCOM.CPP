#include<iostream.h>
#include<conio.h>
class complex
{
 private:
   float real,imag;
 public:
   complex()
   {
    real=0.0;
    imag=0.0;
   }
   complex(float r,float i)
   {
    real=r;
    imag=i;
   }
   void show();
   void add(complex,complex);
  };
  void complex::show()
  {
   cout<<real<<"+i"<<imag<<endl;
  }
  void complex::add(complex a,complex b)
  {
   real=a.real+b.real;
   imag=a.imag+b.imag;
  }
  void main()
  {
   complex A(12.5,5.75),B(3.15,2.65),C;
   clrscr();
   C.add(A,B);
   cout<<"\n  1st Complex Number :";A.show();
   cout<<"\n 2nd complex number :";B.show();
   cout<<"\n Resultant number :";C.show();
   getch();
   }