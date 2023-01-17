#include<iostream>
using namespace std;
 class A
 {
 	private:
 		int a;
 	public:
	 friend int cube(A a1);	
 };
 int cube(A a1)
  {
  	a1.a=3;
  	return(a1.a*a1.a*a1.a);
  }
  int main()
  {
  	A a2;
  	cout<<"friend function "<<endl;
  	cout<<"cube : "<<cube(a2);
  	return 0;
  }
