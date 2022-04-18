#include<iostream>
#include<string>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::getline;

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	
	if (s1.size() == s2.size()) cout << "The two strings have the same length!" << endl;
	else if (s1.size() > s2.size()) cout << "The longer string is " << s1 << endl;
	else cout << "The largest string is " << s2 << endl;
	
	return 0;
}
