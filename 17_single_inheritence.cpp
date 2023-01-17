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
  
  int main()
  {
  	B b1;
  	cout<<"Single level inhe."<<endl;
  	cout<<"A = "<<b1.a<<endl;
  	cout<<"B = "<<b1.b;
  	return 0;
  	
  }


