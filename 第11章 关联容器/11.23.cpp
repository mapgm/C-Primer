#include <string>
#include <map>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	multimap<string, string> family;
	int p;
	string lastName, firstName;
	while (cin >> p)
	{
		if (p == 1)
		{
			cin >> lastName;
			family.insert({lastName, ""});
		}
		if (p == 2)
		{	
			cin >> lastName >> firstName;
			family.insert({lastName, firstName});
		}
	}	
	for (const auto& name : family)
	{
		cout << name.first << " : " << name.second << endl;
	}
	
	return 0;
}
