#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool predicate(const string &s) 
{ 
	return s.size() >= 5; 
}

int main()
{
	vector<string> v = {"a", "as", "aasss", "aaaaassaa", "aaaaaabba", "aaa"};
	vector<string>::iterator iter = partition(v.begin(), v.end(), predicate);
	
	for (auto it = v.begin(); it != iter; ++it)
		cout << *it << " ";
	cout << endl;
	
	return 0;
}
