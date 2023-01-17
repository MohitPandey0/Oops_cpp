   // 30 WAP to implement of nested namespace.

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

  	using namespace first;
  	using namespace first1;
  	using namespace first2;
  cout<<"NESTED NAMESPACE "<<endl;	
  	cout<<"var 1 ; ";cin>>a;
  	cout<<"var 2 ; ";cin>>b;
  	cout<<"var s3 ; ";cin>>c;
  	return 0;
  }
