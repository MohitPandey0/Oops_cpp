                    //cont. overloading with diff. argument... 
#include<iostream>
using namespace std;
class A
{
	public:
		A(int a);
		A(float f);
};

A::A(int a)
{
	cout<<"cont. overloading with diff. argument..."<<endl;
	cout<<"A= "<<a<<endl;
}
A::A(float f)
{
	cout<<"B = "<<f<<endl;
}
int main()
{
	A a1(12);
	A b(0.9f);
return 0;	
}
