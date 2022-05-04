#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

int main()
{
	// 10.2
	list<string> l = {"aa", "aaa", "aa", "cc"};
	cout << "The number of occurrences of \"aa\" is: " << count(l.cbegin(), l.cend(), "aa") << endl;
	
	return 0;
}
