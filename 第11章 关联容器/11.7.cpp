#include <string>
#include <map>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	map<string, vector<string>> family;
	int p;
	string lastName, firstName;
	while (cin >> p)
	{
		if (p == 1)
		{
			cin >> lastName;
			if (family.find(lastName) == family.end()) family[lastName] = {};
		}
		if (p == 2)
		{
			cin >> lastName >> firstName;
			family[lastName].push_back(firstName);
		}
	}
	for (const auto& name : family)
	{
		cout << name.first << " : ";
		for (const auto& p : name.second)
			cout << p << ' ';
		cout << endl;
	}

	return 0;
}
