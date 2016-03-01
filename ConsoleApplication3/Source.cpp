#include <iostream>

#include <string> 

using namespace std;

int main()
{
	int age;
	string name;
	
	cout << "Please enter your name \n ";
	cin >> name;

	cout << "Please enter your age \n";
	cin >> age; 

	if (age < 18)
	{
		cout << "SORRY " << name << " WE CAN NOT SELL ALCOHOL TO YOU \n";
	}
	else
	{
		cout << "Welcome " << name << " What kind of alcohol would you like to have \n ";
	}
}