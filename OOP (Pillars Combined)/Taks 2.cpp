#include <iostream>
using namespace std;

class Garment{
	private:
		char name[20];
	public:
		void getName()
		{
			}
		virtual void calculatePrice() = 0;	
			
};

class Upper : public Garment{
	private:
		int collarSize;
	public:
		virtual void getCollarSize() = 0;
};

class Lower : public Garment{
	private:
		int waist;
	public:
		virtual void getWaist() = 0;		
};

class Shirt : public Upper{
	public:
		void calculatePrice()
		{
			}
		void getCollarSize()
		{
			}	
};

class Pajama : public Lower{
	public:
	void calculatePrice()
	{
		}
	void getWaist()
	{
		}	
};


int main()
{
	
	
	return 0;
}