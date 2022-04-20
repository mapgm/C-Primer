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
	
	for (vector<int>::size_type i = 0, j = v.size() - 1;i < j;i ++, j --)
	{
		cout << v[i] + v[j] << endl;
	}
	
	return 0;
}
