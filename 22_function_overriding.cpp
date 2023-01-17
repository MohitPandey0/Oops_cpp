            //FUNCTION OVERRIDING------------->
#include<iostream>
using namespace std;
  class A
  {
  	public:	
	 virtual int add(int a)                                                                                                                                                                                                                                                                                                                            
	    {
	    	cout<<"A = "<<a<<endl;
		 } 	  		 
  };
 class B:public A
   {
   	 public:
   	 	int add(int a)
   	 	  {
   	 	  	cout<<"B = "<<a;
		  }
   };
  int main()
  {
  	//int a,B,b1,b2;
  	A *a1,a2;
  	B b2;
  a1=&a2;
  a1->add(5); //20
  a1=&b2;
  a1->add(3);//10
  return 0;
}
