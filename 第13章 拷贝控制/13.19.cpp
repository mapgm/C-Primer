#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
	Employee();
	Employee(const string& name);
	Employee(const Employee&) = delete;
	Employee& operator=(const Employee&) = delete;
	
public:
	string name;
	int id;
	static int increment;
};

int Employee::increment = 0;

Employee::Employee()
{
	id = increment ++;
}

Employee::Employee(const string& name)
{
	this->name = name;
	id = increment ++;
}

int main()
{
	return 0;
}
