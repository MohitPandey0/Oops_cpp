#include<iostream>
using namespace std;
class ParaA
{
	public:
		//int a,b;
		ParaA(int a,int b)
	//	{
	//		a=m;
	//		b=n;
	//	}
	int putdata()	
		{
			cout<<"A = "<<a<<endl;
			cout<<"B = "<<b;
		}
};

int main()
{
	ParaA a1;
	a1.putdata();
return 0;	
}
