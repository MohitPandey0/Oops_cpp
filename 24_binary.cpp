#include<iostream>
using namespace std;
 class Binary
  {
  	public:
  	 int x,y;	
  		Binary();
  		Binary(int a,int b);
  		Binary operator +(Binary &b1);
  	 int disp();	
  };
  Binary::Binary()
   {
   	 cout<<"Default const. "<<endl;
   }
  Binary::Binary(int a,int b)
   {
   	 x=a;
   	 y=b;
   }
   Binary::Binary operator +(Binary &b1)
   {
   	 Binary b2;
   	 b2.x= x+b1.x;
   	 b2.y= y+b1.y;
   }
   int main()
	{
		Binary b3(2,3),b4(4,5),b5;
		b5=b3+b4;
		cout<<b3.disp();
		cout<<b4.disp();
		cout<<b5.disp();
	  return 0;	
	}
