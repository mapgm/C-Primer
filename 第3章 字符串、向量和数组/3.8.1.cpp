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
	
	for (string::size_type i = 0;i < s.size();i ++)
	{
		s[i] = 'X';
	}
	
	cout << s << endl;
	
	return 0;
}
