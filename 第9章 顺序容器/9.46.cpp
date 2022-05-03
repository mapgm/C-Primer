#include <iostream>
#include <string>

using namespace std;

auto add_pre_and_suffix(string name, string const& pre, string const& su)
{
	name.insert(0, pre);
	name.insert(name.size(), su);
	return name;
}

int main()
{
	string name("alan");
	cout << add_pre_and_suffix(name, "Mr.", " Jr.");
	
	return 0;
}
