#include <map>
#include <string>
#include <fstream> 
#include <iostream>
#include <sstream>


using std::string;
using std::ifstream;
using std::map;
using std::istringstream;
using std::cout;
using std::cerr;

map<string, string> buildMap(ifstream& map_file)
{
	map<string, string> trans_map;
	for (string key, value; map_file >> key && getline(map_file, value); ) // value 读取剩余部分
		if (value.size() > 1) trans_map[key] = value.substr(1); // 跳过空格
		else throw std::runtime_error("no rule for " + key);
	return trans_map;
}

const string& transform(const string &s, const map<string, string> &m)
{
	auto map_it = m.find(s);
	return map_it == m.cend() ? s : map_it->second;
}

void word_transform(ifstream& map, ifstream& input)
{
	auto trans_map = buildMap(map);
	for (string text; getline(input, text); ) 
	{
		istringstream iss(text);
		for (string word; iss >> word; )
			cout << transform(word, trans_map) << " ";
		cout << '\n';
	}
}

int main()
{
	ifstream ifs_map("word_transformation_bad.txt"), ifs_content("given_to_transform.txt");
	if (ifs_map && ifs_content) word_transform(ifs_map, ifs_content);
	else cerr << "can't find the documents." << '\n';
	
	return 0;
}
