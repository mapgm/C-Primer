#include <string>
#include <vector>
#include <memory>
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <set>
#include <algorithm>

using std::string;
using std::vector;
using std::shared_ptr;
using std::map;
using std::set;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	std::ifstream file("books.txt");
	vector<string> input;
	map<string, set<decltype(input.size())>> dictionary;
	decltype(input.size()) lineNo = 0;
	
	for (string line;std::getline(file, line);++lineNo)
	{
		input.push_back(line);
		std::istringstream line_stream(line);
		for (string text, word; line_stream >> text; word.clear())
		{
			std::remove_copy_if(text.begin(), text.end(), std::back_inserter(word), ispunct);
			dictionary[word].insert(lineNo);
		}
	}
	
	do
	{
		cout << "enter word to look for, or q to quit: ";
		string s;
		if (!(cin >> s) || s == "q") break;
		auto found = dictionary.find(s);
		if (found != dictionary.end())
		{
			cout << s << " occurs " << found->second.size() << (found->second.size() > 1 ? " times" : " time") << endl;
			for (auto i : found->second)
				cout << "\t(line " << i + 1 << ") " << input.at(i) << endl;
		}
		else cout << s << " occurs 0 time" << endl;
	}while(true);
	
	return 0;
}
