             //static data member using constructor in c++ 
#include<iostream>
using namespace std;
 class staticdata
 {
 	public:
 		static int len,len2;
 		staticdata()
 		  {
 		  	len ++;
 		  	len2--;
		   }
		void disp()
		 {
		 	cout<<"LEN : "<<len<<endl;
		 	cout<<"LEN2 : "<<len2<<endl;
		 }
 };
  int staticdata :: len=0;
  int staticdata :: len2=0;
   
  int main()
   {
   	 staticdata s1;
   	 s1.disp();
   	 return 0;
   }
