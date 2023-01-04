#include<iostream>
using namespace std;

class Val
{
	private :
		    int a;
		    
    public  :
    	    void putdata()
    	    {
    	    	cout <<"Enter value of A:";
    	    	cin  >>this->a;
			}
			
			void getdata()
    	    {
    	    	cout <<"Enter value of A:"<<this->a<<endl;
			}
			
			Val operator<(Val c)
			{
				if(this->a >c.a)
				{
					cout <<"A is big...."<<endl;
				}
				else
				{
					cout <<"B is big....."<<endl;
				}
			}
};

int main()
{
	Val v1,v2,v3;
	    v1.putdata();
	    v2.putdata();
	    v3 = v1 < v2;
	return 0;
}
