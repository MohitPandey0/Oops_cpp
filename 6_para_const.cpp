#include<iostream>
using namespace std;
 class ParaA
 {
 	int a,b;
 	public:
 		A(int m,int n)
 		 {
 		 	a=m;
 		 	b=n;		 	
		  }
		  int  putdata()
		  {
		  	cout<<"Para_Constuctor : "<<endl<<endl;
		  	cout <<"A= "<<a<<endl;
		  	cout<<"B= "<<b;		  	
		  }
 };
 int main()
 {
 	ParaA a1;
 	a1.putdata();
 	return 0;
 }
