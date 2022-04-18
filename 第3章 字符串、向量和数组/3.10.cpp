#include<iostream>
#include<cstring>
#include<cctype>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string s = "This is a ... a string!!!";
	string res;
	
	for (auto x : s)
	{
		if (!ispunct(x))
		{
			res += x;
		}
	}
	
	cout << res << endl;
	
	return 0;
}
