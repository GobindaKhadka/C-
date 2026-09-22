//multiply using class template
#include<iostream.h>
#include<conio.h>
template<class T>
class mul
{
 private:
     T x,y;
 public:
     void getinfo()
     {
      cout<<"\n Enter two digits:";
      cin>>x>>y;
     }
     T display();
 };
 template<class T>
 T mul<T>::display()
 {
  T c;
  c=x*y;
  return(c);
 }
void main()
{
 mul<int> obj1;
 mul<float> obj2;
 clrscr();
 obj1.getinfo();
 obj2.getinfo();
 cout<<"\n product of integrrs is :"<<obj1.display();
 cout<<"\n product of float is :"<<obj2.display();
 getch();
}