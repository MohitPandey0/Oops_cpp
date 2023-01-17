   // 29 WAP to implement of namespace.
#include<iostream>
using namespace std;
  namespace first
  {
  	int m;
  	void disp()
  	{
  		cout<<"Implemention of namespace"<<endl;
    }
  }  
  int main()
  {
  	first::disp();
  	cout<<"variable ; ";
  	cin>>first::m;
  	return 0;
  }
