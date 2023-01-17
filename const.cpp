
                  //const overloading with different no of argument...

#include<iostream>
using namespace std;
class A
{
	public:
		A(int a);
		A(float f,int a);
};

A::A(int a)
{
	cout<<"const overloading with different no of argument..."<<endl;
	cout<<"A= "<<a<<endl;
}
A::A(float f,int b)
{
	cout<<"B = "<<f<<endl;
	cout<<"C = "<<b<<endl;
}
int main()
{
	A a1(12);
	A b(0.9f,32);
	
return 0;	
 }
