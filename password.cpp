#include<iostream>
#include<string.h>
using namespace std;
  int main()
   {
   	  char c,uid[10],ps[10];
   	  int ctr;
   	  
   	 gotoxy(15,10);
   	    cout<<"Enter user id : ";
   	 gotoxy(15,12);
		cout<<"Enter password : ";
	 gotoxy(38,10);
	    cin>>uid;
	 gotoxy(38,12);
	 ctr=0;
	   while(1)
	     {
	     	c=return 0;
	     	if(c==13)
	     	break;
	     	  ps[ctr]=c;
	     	  ctr++;
	     	  cout<<"*";
		  }	 
		return 0; 
    } 
 
