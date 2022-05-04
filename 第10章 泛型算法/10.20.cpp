#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

size_t bigerThan6(vector<string> const& v)
{
	return count_if(v.cbegin(), v.cend(), [](string const& s){return s.size() > 6;});
}


int main()
{
	vector<string> v = {"alan","moophy","1234567","1234567","1234567","1234567"};
	cout << "The number of strings greater than 6 is: " << bigerThan6(v) << endl;

	return 0;
}
