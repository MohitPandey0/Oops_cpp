#include<iostream>
using namespace std;
 class E
  {
  	public:
  		int e=32;
  };
  class F
  {
  	public:
  		int f=32;
  };
  class A:public E,public F
  {
  	public:
  		int a=9;
  };
  
  
   class B:public A
  {
  	public:
  		int b=32;
  };
  class C:public A
  {
  	public:
  		int c=32;
  };
  class D:public A
  {
  	public:
  		int d=9;
  };
  
  
  
  
  int main()
  {
  	D b1;
  	cout<<"HYBRID INHERITENCEC "<<endl;
  	cout<<"A = "<<b1.e<<endl;
    cout<<"B = "<<b1.f<<endl;
    cout<<"C = "<<b1.a<<endl;
    cout<<"D = "<<b1.d<<endl;
    cout<<"E = "<<b1.e<<endl;
    cout<<"F = "<<b1.f<<endl;
  	return 0;
  	
  }


