#include<iostream>
using namespace std;

int main()
{
	int A = 1;
	
   cout << "Before try "<<endl;
   try {
      cout << "Inside try "<<endl;
      if (A < 0)
      {
         throw A;
         cout << "After throw (Never executed) "<<endl;
      }
   }
   catch (int N ) 
   {
      cout << "Exception Caught "<<endl;
   }
 
   cout << "After catch (Will be executed)"<<endl;
   return 0;
}
	
