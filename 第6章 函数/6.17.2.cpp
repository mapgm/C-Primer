#include <iostream>

using namespace std;

void lower(string& s)
{
	for (auto &x : s)
	{
		if (x >= 'A' && x <= 'Z')
			x += 32;
	}
}

int main()
{
	string s;
	cin >> s;
	
	lower(s);
	
	cout << s << endl;
	
	return 0;
}
