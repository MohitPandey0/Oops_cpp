#include<iostream>
using namespace std;
int main()
{
	int *ptr1,*ptr2,a,b,sum;
	a=10;
	b=20;
	 ptr1 = &a;
	 ptr2 = &b;	 
	 ptr1 = new int;
	 ptr2 = new int;
	    sum = (*ptr1+*ptr2);
	    cout<<"sum = "<<sum<<endl;
	   delete ptr1;
	   delete ptr2; 
  return 0;    
}

