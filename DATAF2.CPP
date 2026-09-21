//example of getline() function
//program to read a line of text using getline()
#include<iostream.h>
#include<conio.h>
void main()
{
 char address[50];
 char name[50];
 clrscr();
 cout<<"\n Enter the name :";
 cin.getline(name,50);
 cout<<"\n Enter the address :";
 cin.getline(address,50);
 cout<<"\n Address ="<<address;
 cout<<"\n NAme ="<<name;
 getch();
}