#include <iostream>

using namespace std;

bool isUpper(const string& s)
{
	for (auto x : s)
	{
		if (x >= 'A' && x <= 'Z')
			return true;
	}
	return false;
}

int main()
{
	string s;
	cin >> s;
	
	if (isUpper(s)) cout << "YES" << endl;
	else cout << "NO" << endl;
	
	return 0;
}
