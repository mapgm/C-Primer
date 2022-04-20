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
	
	for (vector<int>::iterator iter = v.begin();iter != v.end() - 1;iter ++)
	{
		cout << *iter + *(iter + 1) << endl;
	}

	return 0;
}
