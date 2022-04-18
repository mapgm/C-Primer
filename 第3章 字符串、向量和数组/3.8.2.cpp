#include<iostream>
#include<cstring>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string s;
	
	cin >> s;
	
	string::size_type i = 0;
	while (i < s.size())
	{
		s[i] = 'X';
		i ++;
	}
	
	cout << s << endl;
	
	return 0;
}
