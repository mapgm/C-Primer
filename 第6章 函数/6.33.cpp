#include <iostream>
#include <vector>

using namespace std;

void print(vector<int>::const_iterator x, vector<int>::const_iterator y)
{
	if (x != y)
	{
		cout << *x++ << ' ';
		print(x, y);
	}
}

int main()
{
	vector<int> v = {1, 2, 3, 4, 5};
	
	print(v.begin(), v.end());
	
	return 0;
}
