#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v(10, 1);
	
	for (auto x : v) cout << x << ' ';
	cout << endl;
	
	fill_n(v.begin(), v.size(), 0);
	
	for (auto x : v) cout << x << ' ';
	cout << endl;
	
	return 0;
}
