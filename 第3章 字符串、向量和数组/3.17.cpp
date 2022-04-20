#include<iostream>
#include<cstring>
#include<vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	vector<string> v;
	string s;
	
	while (cin >> s)
	{
		v.push_back(s);
	}
	
	for (auto &x : v)
	{
		for (auto &p : x)
		{
			p = toupper(p);
		}
	}
	
	for (auto x : v) cout << x << endl;
	
	return 0;
}
