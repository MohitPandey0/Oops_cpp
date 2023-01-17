#include <iostream>
using namespace std;
 
class  defaul_A {

public:
    // User defined constructor
     defaul_A()
	 { 
	   cout << "It ia a default Constructor" << endl; 
	 }
 
   
};
 

// Driver Code
int main()
{
    defaul_A d1; 
    return 0;
}
