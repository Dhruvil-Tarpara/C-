#include<iostream>
using namespace std;

class Animal
{
	public :
		 int Age;
         char name[50];
         char place[50];
         
};

class Zebra : public Animal
{
	  public:
	  	   void putdata()
	  	   {
	  	   	 cout <<"Enter Zebra age :";
	  	   	 cin  >>this->Age;
	  	   	 cout <<"Enter Zebra Name :";
	  	   	 cin  >>this->name;
	  	   	 cout <<"Enter Zebra Place :";
	  	   	 cin  >>this->place;
		   }
	       	
	       void getdata()
	  	   {
	  	   	 cout <<"| Age \t Name \t Place |"<<endl
	  	   	      <<"|"<<this->Age<<" \t "<<this->name<<" \t "<<this->place<<" |"<<endl;
		   }
};

class Dolphin  : public Animal
{
	public :
		   void put()
	  	   {
	  	   	 cout <<"Enter Dolphin age :";
	  	   	 cin  >>this->Age;
	  	   	 cout <<"Enter Dolphin Name :";
	  	   	 cin  >>this->name;
	  	   	 cout <<"Enter Dolphin Place :";
	  	   	 cin  >>this->place;
		   }
		   
		   void getdata()
	  	   {
	  	   	 cout <<"| Age \t Name \t Place |"<<endl
	  	   	      <<"|"<<this->Age<<" \t "<<this->name<<" \t "<<this->place<<" |"<<endl;
		   }
};

int main()
{   
   Zebra  z;
   Dolphin d;
   
   z.putdata();
   z.getdata();
   d.put();
   d.getdata();
      
	return 0;
}
