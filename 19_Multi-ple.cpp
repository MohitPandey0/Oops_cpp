#include<iostream>
using namespace std;
 class A
  {
  	public:
  		int a=32;
  };
  class B
  {
  	public:
  		int b=34;
  };
  class C:public A,public B
  {
  	public:
  		int c=38;
  };
  
  
  int main()
  {
  	C b1;
  	cout<<"MULTIPLE INHERITENCEC "<<endl;
  //	cout<<"Sum = "<<b1.a+b1.b<<endl;
  cout<<"A = "<<b1.a<<endl;
  cout<<"B = "<<b1.b<<endl;
    cout<<"C = "<<b1.c;
  	return 0;
  	
  }


