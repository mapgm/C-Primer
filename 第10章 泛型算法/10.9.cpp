#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void print(vector<string> v)
{
	for (auto x : v)
		cout << x << ' ';
	cout << "\t" << "v.size() = " << v.size() << endl;
}

int main()
{
	vector<string> v = {"a", "v", "a", "s", "b", "v", "a", "a"};
	print(v);
	
	sort(v.begin(), v.end());
	print(v);
	
	vector<string>::iterator iter = unique(v.begin(), v.end());
	print(v);
	
	v.erase(iter, v.end());
	print(v);
	
	return 0;
}
