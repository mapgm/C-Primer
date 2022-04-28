#include <iostream>
#include <cstring>

using namespace std;

class Person 
{
	friend istream &read(istream &is, Person &person);
	friend ostream &print(ostream &os, const Person &person);
	
public:
	Person() = default;
	Person(const string& sname, const string& saddr) : name(sname), address(saddr) { }
	
	string get_name() const { return name; };
	string get_address() const {return address; };
	
private:
	string name;
	string address;
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
	read(cin, s1);
	print(cout, s1);
	cout << endl;
	
	Person s2;
	cout << s2.get_name() << ' ' << s2.get_address() << endl;
	
	Person s3("mapgm", "muc");
	cout << s3.get_name() << ' ' << s3.get_address();

	
	return 0;
}
