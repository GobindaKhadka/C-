//calculator using switch case
#include<iostream.h>
#include<conio.h>
void main()
{
 int a,b;
 float result;
 char ch;
 clrscr();
  cout<<"\n Enter first number:";
 cin>>a;
 cout<<"\n Enter second number:";
 cin>>b;
 cout<<"\n ENter an operand(+,-,/,%,*)....";
 cin>>ch;

 switch(ch)
 {
  case '+':
	   result = a + b;
	   cout<<"\n sum ="<<result;
	   break;
  case '-':
	   result = a - b;
	   cout<<"\n difference ="<<result;
	   break;
  case '*':
	   result = a * b;
	   cout<<"\n product ="<<result;
	   break;
  case '/':
	   if(b!=0)
	   {
	    result = a / b;
	    cout<<"\n Quotient ="<<result;
	   }
	   else
	   {
	    cout<<"\n Division by zero is not possible...";
	   }
	   break;
  case '%':
	  // result = a%b;
	   cout<<"\n Remainder ="<<a%b; //why didn't i used result here...??
	   break;        //float cannot be used for determining remainder
  default:
	   cout<<"\n Invalid Operator...!";
  }
 getch();
}