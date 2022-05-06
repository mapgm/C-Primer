#include <string>
#include <map>
#include <iostream>

using namespace std;

int main()
{
	map<string, int> word_count;
	string tmp;
	while (cin >> tmp)
		word_count[tmp] ++;
	for (const auto& elem : word_count)
		cout << elem.first << " : " << elem.second << endl;
	
	return 0;
}
