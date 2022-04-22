#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	for (auto &x : v)
	{
		x = ((x % 2 == 1) ? 2 * x : x);
	}
	
	for (auto x : v)
	{
		cout << x << endl;
	}
	
	return 0;
}
