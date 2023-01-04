#include<iostream>
#include<String.h>
using namespace std;
class garage
{
	private:
		   int a;
	public:
		  garage()
		  {
			throw 0;
		  }
};
class motor : public garage
		{
	public:
		motor()
		{
			cout<<"moter class"<<endl;
	 	}
};
int main()
{
	try
	{
	motor car;
	}
	catch(...)
	{
	cout<<"throw From garage."<<endl;
	}
	return 0;
}
