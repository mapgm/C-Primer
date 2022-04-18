#include<iostream>
#include<string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string s;
	
	cin >> s;
	
	for (auto &x : s)
	{
		x = 'X';
	}
	
	cout << s << endl;
	
	return 0;
}
