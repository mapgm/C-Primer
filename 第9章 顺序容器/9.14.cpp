#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
	list<const char*> l = {"hello", "world"};
	vector<string> v;
	v.assign(l.cbegin(), l.cend());
	for (auto x : v) cout << x << endl;
	
	return 0;
}
