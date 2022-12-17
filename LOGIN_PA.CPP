	     // 32 LOGIN PAGE USING C++
#include<iostream.h>
#include<conio.h>
#include<string.h>

 void main()
 {
  char c,uid[10],ps[10];
   int ctr;
   clrscr();
  gotoxy(15,10);
  cout<<"Enter User id  : ";
   gotoxy(15,11);
   cout<<"Enter Password : ";
    gotoxy(34,10);
    cin>>uid;
     gotoxy(34,11);
    ctr=0;
     while(1)
      {
       c=getch();
       if(c==13)
	break;
	ps[ctr]=c;
	ctr++;
	cout<<"*";
      }
 // START CHECK PASSWORD ------>
       ps[ctr]='\0';
       if(strcmpi(ps,"123456789")==0 && strcmpi(uid,"Mohit")==0)
	{
	 clrscr();
	 gotoxy(15,12);
	 cout<<"Welcome, Mohit....";
	}
	else
	{
	 gotoxy(15,12);
	 cout<<"Check Your UID or PASSWORD ";
	}
 // END CHECK PASSWORD ------>
  getch();
 }