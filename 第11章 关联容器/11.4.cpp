#include <string>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	map<string, int> word_count;
	string tmp;
	while (cin >> tmp)
	{
		string s;
		for (auto& x : tmp) x = toupper(x);
		for (auto& x : tmp) 
			if (x >= 'A' && x <= 'Z')
				s += x;
		word_count[s] ++;
	}
	for (const auto& elem : word_count)
		cout << elem.first << " : " << elem.second << endl;
	
	return 0;
}
