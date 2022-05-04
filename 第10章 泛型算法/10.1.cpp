#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	// 10.1
	vector<int> v = {1, 2, 6, 4, 5, 6, 6, 6, 2};
	cout << "The number of occurrences of 6 is: " << count(v.cbegin(), v.cend(), 6) << endl;
	
	return 0;	
}
