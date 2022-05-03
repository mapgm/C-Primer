#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<char> v{'h', 'e', 'l', 'l', 'o'};
	string str(v.cbegin(), v.cend());
	
	for (auto x : str) cout << x;
	cout << endl;
	
	return 0;
}
