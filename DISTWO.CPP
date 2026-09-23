//Distance betweeen two points
#include<iostream.h>
#include<conio.h>
#include<math.h>
class point
{
 float x,y;
 public:
   void getdata()
   {
    cout<<"\n Enter two numbers:";
    cin>>x>>y;
   }
   void distance(point a,point b)
   {
    float dx,dy,d;
     dx=b.x-a.x;
     dy=b.y-a.y;
     d=sqrt((dx*dx)+(dy*dy));
      cout<<"\n distance between two points is :"<<d;
   }
  };
 void main()
 {
  point p1,p2,p3;
  clrscr();
  p1.getdata();
  p2.getdata();
  p3.distance(p1,p2);
   getch();
 }