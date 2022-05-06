#include <map>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	multimap<string, string> authors = {
		{"alan", "DMA"},
		{"pezy", "LeetCode"},
		{"alan", "CLRS"},
		{"pezy", "CP5"},
		{"wang", "FTP"},
		{"pezy", "CP5"},
		{"wang", "CPP-Concurrency"}};
	
	string author = "pezy";
	string work = "CP5";
	
	auto found = authors.find(author);
	auto count = authors.count(author);
	while (count --)
	{
		if (found->second == work)
		{
			found = authors.erase(found);
		}
		else ++found;
	}
	
	for (const auto &author : authors)
		cout << author.first << " " << author.second << endl;
	
	return 0;
}
