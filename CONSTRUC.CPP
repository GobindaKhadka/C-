//Concept of Constructor
#include<iostream.h>
#include<conio.h>
class sample
{
 public:
  sample()
  {
   cout<<"\n Constructor called ";
  }
 };
 void main()
 {
  cout<<"\n I am in main function "<<endl;
  sample obj;
  cout<<"I am back in main function "<<endl;
  getch();
 }