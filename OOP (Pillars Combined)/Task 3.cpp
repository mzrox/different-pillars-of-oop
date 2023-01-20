#include <iostream>
using namespace std;

class Garment{
	protected:
		string name;
	public:
		void setName()
		{
			cout<<"\nEnter Name: ";
			cin>>name;
			}
		void getName()
		{
			cout<<"\nName: "<<name<<endl;
			}	
		virtual int calculatePrice() = 0;	
			
};

class Upper : public Garment{
	protected:
		int collarSize;
	public:
		void setCollarSize()
		{
			cout<<"\nEnter Collar Size: ";
			cin>>collarSize;
		}
		virtual int getCollarSize() = 0;
};

class Lower : public Garment{
	protected:
		int waist;
	public:
		void setWaist()
		{
			cout<<"\nEnter Waist:";
			cin>>waist;
		}
		virtual int getWaist() = 0;		
};

class Shirt : public Upper{
	public:
		int calculatePrice()
		{
			return collarSize*20 + 10;
			}
		int getCollarSize()
		{
			return collarSize-1;	
			}	
};

class Pajama : public Lower{
	public:
	int calculatePrice()
	{
		return waist*15 + 50;
		}
	int getWaist()
	{
		return waist - 2;
		}	
};

class trouser : public Lower{
	public:
		int calculatePrice()
		{
			return waist*20 + 100;
			}
		int getWaist()
		{
			return waist - 3;
			}	
};
int main()
{	
	int total;
//	Upper u;      //error because abstract class
//  Lower l;	  //error because abstract class	
//  Garment g;    //error because abstract class
	Shirt s[10];
	Pajama p[10];
	trouser t[10];
	for(int i=0 ; i<=9 ; i++)
	{
		int choice;
		cout<<"\nWhat Item you want to Buy(Shirt(1) , Pajama(2), Trowser(3)): ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"\n\n\t\t\t"<<"------------ "<<i+1<<" ------------:"<<endl;
				
				s[i].setName();
				s[i].setCollarSize();
				cout<<"Collar Size of Shirt "<<i+1<<": ";
				cout<<s[i].getCollarSize();
				cout<<"\nPrice of Shirt "<<i+1<<": ";
				cout<<s[i].calculatePrice();	
				cout<<endl;
				total = total + s[i].calculatePrice();
				break;
			case 2:
				cout<<"\n\n\t\t\t"<<"------------ "<<i+1<<" ------------:"<<endl;
				
				s[i].setName();
			    p[i].setWaist();
				cout<<"Waist of Pajama "<<i+1<<": ";
				cout<<p[i].getWaist();
				cout<<"\nPrice of Pajama "<<i+1<<": ";
				cout<<p[i].calculatePrice();
				cout<<endl;
				total = total + p[i].calculatePrice();
				break;
			case 3:
				cout<<"\n\n\t\t\t"<<"------------ "<<i+1<<" ------------:"<<endl;
				
				s[i].setName();
				t[i].setWaist();
				cout<<"Waist of Trouser "<<i+1<<": ";
				cout<<t[i].getWaist();
				cout<<"\nPrice of Trouser "<<i+1<<": ";
				cout<<t[i].calculatePrice();
				cout<<endl;
				total = total + t[i].calculatePrice();
				break;
			default:
				cout<<"\n\t\t........Wrong Entry........\n";
				i--;
				break;			
		}
	}
	cout<<"\n\n\t\tTotal Price: "<<total;
	return 0;
}
