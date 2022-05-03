#include <string>
#include <fstream>
#include <iostream>

using namespace std;

int main()
{	
	string s = "forsuqqzxysuvwxzppqtrr";
	string longest;
	int st = 0, ed = 0;
	while (s.find_first_not_of("acemnorsuvwxz", st) != string::npos)
	{
		if (!st && !ed)
		{
			st = s.find_first_not_of("acemnorsuvwxz", st);
			longest = s.substr(0, st);
			ed = ++st;
		}
		else
		{
			st = s.find_first_not_of("acemnorsuvwxz", st);
			if (st - ed > longest.size()) longest = s.substr(ed, st - ed);
			ed = ++st;
		}
	}
	cout << longest << endl;
	
	return 0;
}
