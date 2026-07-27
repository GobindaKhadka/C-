//multiple constructor in a class
#include<iostream.h>
#include<conio.h>
class circle
{
 float radius;
public:
 circle(){
  radius=1;
 }
 circle(float r)
 {
  radius=r;
 }
 void area(){
  cout<<"Area = "<<3.14*radius*radius<<endl;
 }
};

void main()
{
 circle c1(5);
 circle c2(7);
 clrscr();
 c1.area();
 c2.area();
 getch();
}

