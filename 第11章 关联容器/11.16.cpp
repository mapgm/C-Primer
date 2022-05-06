#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<int, string> mp = {{1, "hh"}};
	map<int, string>::iterator it = mp.begin();
	it->second = "hello";
	
	for (const auto& x : mp) 
		cout << x.first << ' ' << x.second << endl;
	
	return 0;
}
