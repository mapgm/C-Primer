#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
	vector<double> v{1.2, 3.4, 5.6, 7.8, 9.0};
	
	int sum = accumulate(v.cbegin(), v.cend(), 0);
	
	cout << sum << endl;
	
	return 0;
}
