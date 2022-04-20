#include<iostream>
#include<cstring>
#include<vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	vector<int> v(10);
	
	for (int i = 0;i < 10;i ++)
	{
		v[i] = i;
	}
	
	for (vector<int>::iterator iter = v.begin();iter != v.end();iter ++)
	{
		*iter *= 2;
	}
	
	for (vector<int>::const_iterator iter = v.cbegin();iter != v.cend();iter ++)
	{
		cout << *iter << endl;
	}
	
	return 0;
}
