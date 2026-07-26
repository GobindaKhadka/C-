//program to demonstrate passing object as function argument
#include<iostream.h>
#include<conio.h>
class distance
{
int meter;
public:
void input()
{
cout<<"Enter Meter :";
cin>>meter;
}
void add(distance d)
{
cout<<"Total ="<<meter+d.meter;
}
};
void main()
{
distance d1,d2;
d1.input();
d2.input();
d1.add(d2);
getch();
}
