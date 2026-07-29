#include<iostream.h>
#include<conio.h>
#include<string.h>
class concat
{
 char str[20];
 public:
       void input(){
	cin>>str;
       }
       void display(){
	cout<<str<<endl;
       }
       concat operator+(concat);
 };
 concat concat :: operator+(concat x)
 {
  concat s;
  strcpy(s.str,str);
  strcat(s.str,x.str);
  return(s);
 }
 void main()
 {
  clrscr();
  concat A,B,C;
  cout<<"\n Enter 1st string:";          A.input();
  cout<<"\n Enter 2nd string:";          B.input();
  C=A+B;
  cout<<"\n 1st string:";                A.display();
  cout<<"\n 2nd string:";                B.display();
  cout<<"\n Concatenated string : ";     C.display();
  getch();
}
