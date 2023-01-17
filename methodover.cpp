       //method overloading with diff. data type .......
       
#include<iostream>
using namespace std;
class MethodOver
{
	public:
	int	add(int a,int b);
	int	add(int c,int d,int f);

};

int MethodOver::add(int a,int b)
{

	cout<<"A= "<<a+b<<endl;
}
int MethodOver::add(int c,int d,int f)
{
	f=d+c;
	cout<<"B = "<<f<<endl;
}
int main()
{
		cout<<"method overloading with diff. data type ......."<<endl;
 	MethodOver m1;
	m1.add(2,5);
	m1.add(4,5);
return 0;	
}
