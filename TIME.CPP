//Adding two times hr,min and sec by passing object as a function argument
#include<iostream.h>
#include<conio.h>
class time
{
 private:
  int hr,min,sec;
 public:
  void gettime()
  {
   cout<<"\n Enter hour minute and second :";
   cin>>hr>>min>>sec;
  }
  void addtime(time t1,time t2)
  {
   sec=t1.sec+t2.sec;
   min=sec/60;
   sec=sec%60;
   min=min+t1.min+t2.min;
   hr=min/60;
   min=min%60;
   hr=hr+t1.hr+t2.hr;
  }
  void showtime()
  {
   cout<<"\t "<<hr<<":"<<min<<":"<<sec<<endl;
  }
 };
 void main()
 {
  time A,B,C;
  clrscr();
  cout<<"\n For time A:";
  A.gettime();
  cout<<"\n For time B:";
  B.gettime();
  C.addtime(A,B);
  cout<<"\n Time A :";
  A.showtime();
  cout<<"\n Time B :";
  B.showtime();
  cout<<"\n Resulatant time :";
  C.showtime();
  getch();
 }
