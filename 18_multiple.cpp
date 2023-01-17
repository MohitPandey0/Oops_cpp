#include<iostream>
using namespace std;
 class A
  {
  	public:
  		int a=12;
  };
  class B:public A
  {
  	public:
  		int b=32;
  };
  class C:public B
  {
  	public:
    
  		int c=9;
  };
  int main()
  {
  	C b1;
  	cout<<"Multi-level inhe."<<endl;
  	cout<<"A = "<<b1.a<<endl;
  	cout<<"B = "<<b1.b<<endl;
    cout<<"C = "<<b1.c;
  	return 0;
  	
  }


