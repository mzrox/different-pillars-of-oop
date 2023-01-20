#include <iostream>
using namespace std;

int remainder(int year)
{
    return (year - 4 * (year / 4));
}

int main()
{
	int year;
	cout<<"Enter Year:";
	cin>>year;
	double a;
	a=remainder(year);
    if(a == 0)
		cout<<"\nLeap Year"; 
	else 
		cout<<"\nNot a Leap Year";
	 
    return 0;
}
