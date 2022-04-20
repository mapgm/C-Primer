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
	vector<int> v;
	int t = 0;
	
	while (cin >> t)
	{
		v.push_back(t);
	}
	
	for (vector<int>::iterator iter1 = v.begin(), iter2 = v.end() - 1;iter1 <= iter2;iter1 ++, iter2 --)
	{
		cout << *iter1 + *iter2 << endl;
	}
	
	return 0;
}
