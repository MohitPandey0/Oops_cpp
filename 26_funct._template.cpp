#include<iostream>
using namespace std;
 template<class t>
 void swap(t a,t b)
 {
   cout<<"function template  "<<endl;
 	cout<<"Before swaping "<<endl;
 	cout<<"A : ";
 	cin>>a;
 	cout<<"B : ";
 	cin>>b;
     a=a+b;
     b=a-b;
 	 a=a-b;
 	cout<<"After swaping "<<endl;
 	cout<<a<<endl;
 	cout<<b;
 }
 
 int main()
  {
  	swap(1,2);
  	return 0;
  }
