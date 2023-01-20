#include<iostream>
using namespace std;

class person{
	private:
		int age;
		string name;
	public:
		setData(int age , string name)
		{
			this->age = age;
			this->name = name;
			}	
		getData()
		{
			cout<<"Name: "<<this->name<<endl;
			cout<<"Age: "<<this->age<<endl;
			}	
};

class date{
	private:
		int day;
		int month;
		int year;	
	public:
		setDate(int day , int month , int year)
		{
			this->day = day;
			this->month = month;
			this->year = year;
			}
		getDate()
		{
			cout<<"Joining Date: "<<day<<"/"<<month<<"/"<<year<<endl;
			}	
};

class employee : private person{
	private:
		double empID;
		date d;
	public:
		employee(double empID , int age , string name , int date , int month , int year)
		{
			this->empID = empID;
			d.setDate(date , month , year);
			setData(age , name);
			getData();
			cout<<"Employee ID: "<<empID<<endl;
			d.getDate();
			}
};

int main()
{
	employee e(125 , 22 , "Muzammil" , 07 , 11 , 2022);
	
}