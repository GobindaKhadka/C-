//Passing object as function arguments and returning object from function
#include<iostream.h>
#include<conio.h>
class complex
{
 private:
  float real,imag;
 public:
  void input();
  void show();
  friend complex add(complex,complex);
 };
 void complex::input()
 {
  cout<<"\n Enter real and imaginary numbers :";
  cin>>real>>imag;
 }
 void complex::show()
 {
  cout<<real<<"+i"<<imag<<endl;
 }
 complex add(complex a,complex b)
 {
  complex c;
  c.real = a.real+b.real;
  c.imag = a.imag+b.imag;
  return(c);
 }
 void main()
 {
  complex A,B,C;
  clrscr();
  cout<<"\n For 1st Complex number:";
  A.input();
  cout<<"\n For 2nd Complex number:";
  B.input();
  C=add(A,B);
  cout<<"\n 1st Complex number :";
  A.show();
  cout<<"\n 2nd Complex number :";
  B.show();
  cout<<"\n Resultant Complex number :";
  C.show();
  getch();
 }