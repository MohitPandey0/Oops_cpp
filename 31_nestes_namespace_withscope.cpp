   // 31 WAP to implementation of scope resolution.

#include<iostream>
using namespace std;
  namespace first
  {
  	int a;
    namespace first1
     {
     	int b;
	 }
  }  
  namespace first2
   {
   	 int c;
   }
  
  int main()
  {

//  	using namespace first;
//  	using namespace first1;
//  	using namespace first2;
  cout<<"NESTED NAMESPACE "<<endl;	
  	cout<<"var 1 ; ";
	cin>>first::a;
  	cout<<"var 2 ; ";
	cin>>first::first1::b;
  	cout<<"var s3 ; ";
	cin>>first2::c;
  	return 0;
  }
