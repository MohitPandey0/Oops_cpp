#include<iostream>
using namespace std;
 inline int cube(int s)//inline function
 {
    return (s*s*s);
 }
int main()
{
	int a,res;
	cout<<"inline function "<<endl;
	cout<<"enter a no.: ";
	cin>>a;
	res=cube(a);
	cout<<"cube : "<<res;
	return 0;
}
