#include<iostream>
#include<string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string s, res;
	
	while (cin >> s)
	{
		res += s;
	}
	
	cout << res << endl;
	
	return 0;
}
