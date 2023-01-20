#include<iostream>
using namespace std;
     
class shape{
	protected:
		int length;
		double area;
	public:
		void setData(){
		cout<<"\nEnter Length: "; cin>>length;
		}
		void draw(){
		}					
};     

class triangle : public shape{
	public:	
		void draw(){
			area = 3*length;
			cout<<"\nArea Of Triangle = "<<area;
		}
};

class square : public shape{	
	public:
		void draw(){
			area = length*length;
			cout<<"\nArea Of Square = "<<area;
		}
};
     
int main()
{
	for(int i=1 ; i<=2 ; i++)
	{
	string entry;
	cout<<"\nEnter Shape you want to draw(triangle , square): ";
	cin>>entry;
	if(entry == "triangle"){
		triangle t;
		t.setData();
		t.triangle::draw();
		}
	else if(entry == "square"){
		square s;
		s.setData();
		s.square::draw();
	}	
	else{
		cout<<"\n\n\t...WRONG ENTRY...";
		i--;
	}
	}
	return 0;
}
