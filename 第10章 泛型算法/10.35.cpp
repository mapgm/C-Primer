#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
	for (auto it = v.cend() - 1; ; --it)
	{
		cout << *it << endl;
		if (it == v.cbegin()) break;
	}
	
	return 0;
}
