#include <iostream>
#include <cstring>

using namespace std;

struct Person
{
	string name;
	string address;
	
	Person() = default;
	Person(const string& sname, const string& saddr) : name(sname), address(saddr) { }
	
	string get_name() const { return name; };
	string get_address() const {return address; };
};

istream &read(istream &is, Person &person)
{
	return is >> person.name >> person.address;
}

ostream &print(ostream &os, const Person &person)
{
	return os << person.name << " " << person.address;
}

int main()
{
	Person s1;
	s1.name = "riz9";
	s1.address = "MUC";
	
	Person s2;
	read(cin, s2);
	
	print(cout, s1);
	cout << endl;
	print(cout, s2);
	cout << endl;
	
	Person s3("mapgm", "muc");
	cout << s3.get_name() << ' ' << s3.get_address() << endl;
	
	return 0;
}
