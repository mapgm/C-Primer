#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	string s1, s2;
	
	do
	{
		cin >> s1 >> s2;
		string s;
		if (s1.size() < s2.size()) s = s1, cout << "The shorter is " << s << endl;
		else if (s1.size() > s2.size()) s = s2, cout << "The shorter is " << s << endl;
		else cout << "They have same length." << endl;
	}while(cin);
	
	return 0;
}
