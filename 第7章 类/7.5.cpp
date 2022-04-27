#include <iostream>
#include <cstring>

using namespace std;

struct Person
{
	string name;
	string address;
	
	string get_name() const { return name; };
	string get_address() const {return address; };
};

int main()
{
	Person s;
	s.name = "riz9";
	s.address = "MUC";
	
	cout << s.get_name() << " from " << s.get_address() << endl;
	
	return 0;
}
