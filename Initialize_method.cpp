#include<iostream>
using namespace std;

 class Student
 {
 	public:
 		
 		int a,b;
 	    int study();  //initializing main method using class..
 };
 
   int Student::study()
    {
	      cout<<"initializing main method using class.."<<endl;
	      a = 10;
	      b=20;
        cout<<"A = "<<a<<endl;
         cout<<"B = "<<b;
		
		}
   
    int main ()
    {
    	Student s1;
    	s1.study();
     return 0;	
	}
