                  //try and catch and throw
#include<iostream>
using namespace std;
  int main()
 {
   int a,b,c;
   try
   {
	cout<<"Try, catch & throw ------"<<endl;
  	cout<<"Enter two no. : "<<endl;
  	cin>>a>>b;      //a=10; b=0; 
   if(b==0)
     { 
       throw"You can't divided by 0";
	 }
	c=a/b; 
    }
  	 catch(const char s1[])
	    {
	       cout<<"Handle by zero ! ";	
		} 
	return 0;	
 }
