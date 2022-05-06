#include <string>
#include <map>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	map<string, vector<pair<string, string>>> family;
	int p;
	string lastName, firstName, birth;
	while (cin >> p)
	{
		if (p == 1)
		{
			cin >> lastName;
			if (family.find(lastName) == family.end()) family[lastName] = {};
		}
		if (p == 2)
		{
			cin >> lastName >> firstName >> birth;
			family[lastName].push_back({firstName, birth});
		}
	}
	for (const auto& name : family)
	{
		cout << name.first << " : ";
		for (const auto& p : name.second)
			cout << p.first << ' ' << p.second << "   ";
		cout << endl;
	}
	
	return 0;
}
