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

bool isShorter(const string& s1, const string& s2)
{
	return s1.size() < s2.size();
}

int main()
{
	vector<string> v = {"aa", "vq", "ab", "swe", "b", "vvv", "ab", "ad", "swe"};
	print(v);
	
	sort(v.begin(), v.end());
	print(v);
	
	vector<string>::iterator iter = unique(v.begin(), v.end());
	print(v);
	
	v.erase(iter, v.end());
	print(v);
	
	stable_sort(v.begin(), v.end(), isShorter);
	print(v);
	
	return 0;
}
