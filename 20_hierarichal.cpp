#include <iostream>  
using namespace std;  
class A // Base class  
    {  
      public:  
        int x, y;  
       void data() 
        {  
         
          cout<< "Enter value of x and y:\n";  
          cin>> x >> y;  
        }  
    };  
class B : public A  
   {  
     public:  
      void mul()  
       {  
          cout<< "Mul = " << x * y <<endl; 
        }  
    };  
class C : public A   
   {  
     public:  
      void sum()  
       {  
         cout<< "Sum= " << x + y<<endl; 
        }  
    };  
int main()  
{   cout<<"HIERARCHAL INHERITANCE "<<endl<<endl;
    B obj1;   
    C obj2;  
  obj1.data(); 
  obj1.mul();  
  obj2.data();  
  obj2.sum();  
return 0;  
}  


