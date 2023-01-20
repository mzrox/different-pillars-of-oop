#include<iostream>
using namespace std;

class Cube{
	private:
		double length;
		double width;
		double height;
	public:
		//Constructor
		Cube() {}
		
		//Parametarized Constructor	
		Cube(double length , double width , double height)
		{
			this->length = length;
			this->height = height;
			this->width = width;
			}
		
		//Display Function	
		void display()
		{
			cout<<"Length of Cube: "<<length<<endl;
			cout<<"Width of Cube: "<<width<<endl;
			cout<<"Height of Cube: "<<height<<endl;
			}	
		
		//Addition	
		Cube operator+ (Cube& c1)
		{
			Cube sol;
			sol.length = length + c1.length;
			sol.width = width + c1.width;
			sol.height = height + c1.height;
			return sol;
			}
			
		//Substraction	
		Cube operator- (Cube& c2)
		{
			Cube sol;
			sol.length = length - c2.length;
			sol.width = width - c2.width;
			sol.height = height - c2.height;
			return sol;
			}
			
		//Multiplication	
		Cube operator* (Cube& c3)
		{
			Cube sol;
			sol.length = length * c3.length;
			sol.width = width * c3.width;
			sol.height = height * c3.height;
			return sol;
			}
			
		//Division	
		Cube operator/ (Cube& c4)
		{
			Cube sol;
			sol.length = length / c4.length;
			sol.width = width / c4.width;
			sol.height = height / c4.height;
			return sol;
			}	
			
		//Equal To		
		void operator= (Cube c5)
		{
			length = c5.length;
			width = c5.width;
			height = c5.height;
			}
			
		//Equivalent	
		bool operator== (Cube& c6)
		{
			if(length == c6.length && width == c6.width && height == c6.height)
			return 1;
			else
			return 0;
			}					
};

int main()
{
	Cube cub1(10,10,10) , cub2(10,10,10) , res;
	
	cout<<"\n\n\tAddition 1";
	res = cub1 + cub2;
	res.display();
	
	cout<<"\n\n\tSubstraction 1";
	res = cub1 - cub2;
	res.display();
	
	cout<<"\n\n\tMultiply 1";
	res = cub1 * cub2;
	res.display();
	
	cout<<"\n\n\tDivision 1";
	res = cub1 / cub2;
	res.display();
	
	bool a;
	a = cub1 == cub2;
	if(a == 1)
		cout<<"Equal..."<<endl;
	else
		cout<<"Not Equal..."<<endl;
		
	Cube cub3(10,20,30) , cub4(40,50,60) , res;
	res = cub3 + cub4;
	res.display();
	bool b;
	b = cub3 == cub4;
	if(b == 1)
		cout<<"Equal..."<<endl;
	else
		cout<<"Not Equal..."<<endl;	
		
	return 0;
}
