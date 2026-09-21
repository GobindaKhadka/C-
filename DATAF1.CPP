//Example of Get() and put() function
//program to read a line of text from keyboard and display it in/on the screen
#include<iostream.h>
#include<conio.h>
void main()
{
 int count =0;
 char c;
 cout<<"\n Input a line of text below \n";
 cin.get(c);
 while(c!='\n')
 {
  cout.put(c);count++;
  cin.get(c);
 }
 cout<<"\n Totaal no of Character="<<count;
 getch();
}