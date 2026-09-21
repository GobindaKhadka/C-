//oop to print line of text using write() function
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
 char line1[50];
 char line2[50];
 clrscr();
 cout<<"\n Enter line 1:";
 gets(line1);
 cout<<"\n Enter line 2:";
 gets(line2);
 int x=strlen(line1);
 int y=strlen(line2);
 cout<<"\n Line 1:";
 cout.write(line1,x);
 cout<<"\n Line 2:";
 cout.write(line2,y);
 getch();
}
