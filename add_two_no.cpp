
                            //add two no usind class in c++n
#include <iostream>
using namespace std;

 class Add
 {
 	public:
 		int a,b,sum;
 		int getdata()
 		  {
 		  	cout<<"Enter two no. = ";
 		  	cin>>a>>b;
 		  	sum=a+b;
		   } 
	    int putdata()
	      {
	        cout<<"Add :  "<<a<<"+"<<b<<endl;
	        cout<<"sum = "<<sum<<endl;
          }	   
 };
    
   int main()
   {
   	 Add a1;
   	 a1.getdata();
   	 a1.putdata();
   	return 0; 
   }
	 
 
