   //28 WAP to implement class template.
#include<iostream>
using namespace std;
  template <class t1, class t2>
    class A
    {
    	public:
    		t1 a;
    		t2 b;
    	A(t1 x, t2 y)
		  {
		    a=x;
			b=y; 
		  }
		void show()
		{
		   cout<<"A : ";
		   cin>>a;
		   cout<<"B : ";
		    cin>>b;	
		}  
	};
	int main()
	 {
	 	A<int ,int> a1(2,3);
	 	a1.show();
	 return 0;	 	
	 }
