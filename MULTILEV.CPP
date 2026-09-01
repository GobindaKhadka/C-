//Multilevel Inheritance
#include<iostream.h>
#include<conio.h>
class student
{
 protected:
   int roll;
   char name[20];
 public:
   void getdata()
   {
    cout<<"\n Enter student name and roll no:";
    cin>>name>>roll;
   }
 };
 class test:public student
 {
  protected:
    int phy,che,bio;
  public:
    void getmarks()
    {
     cout<<"\n Enter marks of physics,chemistry and biology :";
     cin>>phy>>che>>bio;
    }
  };
  class result:public test
  {
   private:
    int total;
    float per;
   public:
    void calculate()
    {
     total=phy+che+bio;
     per=float(total)/3;
    }
    void display()
    {
     cout<<"\n Name :"<<name;
     cout<<"\t Roll No :"<<roll;
     cout<<"\n\n Marks :";
     cout<<"\t Physics :"<<phy;
     cout<<"\t Chemistry :"<<che;
     cout<<"\t Biology :"<<bio;
     cout<<"\n Total Marks :"<<total;
     cout<<"\n Total percentage :"<<per<<"%"<<endl;
    }
   };
  void main()
  {
   result r;
   clrscr();
   r.getdata();
   r.getmarks();
   r.calculate();
   r.display();
   getch();
  }