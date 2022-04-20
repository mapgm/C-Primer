#include<iostream>
#include<cstring>
#include<vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	vector<int> v;
	int t = 0;
	
	while (cin >> t)
	{
		v.push_back(t);
	}
	
	return 0;
}
