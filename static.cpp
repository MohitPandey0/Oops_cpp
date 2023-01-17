#include<iostream>
using namespace std;
class Staticdata
{
	public:
		static int data;
		static int disp()
	     {
	     	cout<<"static member function \n"<<data<<endl;
		 }
};
int Staticdata :: data=4;
 int main()
 {
 	Staticdata::disp();
 	return 0;
 }
