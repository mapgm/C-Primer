#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <map>

struct IsInRange
{
	IsInRange(std::size_t lower, std::size_t upper)
	:_lower(lower), _upper(upper)
	{}
	
	bool operator()(std::string const& str) const
	{
		return str.size() >= _lower && str.size() <= _upper;
	}
	
	std::size_t lower_limit() const
	{
		return _lower;
	}
	
	std::size_t upper_limit() const
	{
		return _upper;
	}
private:
	std::size_t _lower;
	std::size_t _upper;
};

int main()
{
	//create predicates with various upper limits.
	std::vector<IsInRange> predicates;
	predicates.push_back(IsInRange{ 1, 9 });
	predicates.push_back(IsInRange{ 10, 99 });
	
	
	//create count_table to store counts 
	std::map<std::size_t, std::size_t> count_table;
	count_table[9] = 0;
	count_table[99] = 0;
	
	//read file and count
	std::ifstream fin("storyDataFile.txt");
	for (std::string word; fin >> word; /* */)
		for (auto is_size_in_range : predicates)
			if (is_size_in_range(word))
				++count_table[is_size_in_range.upper_limit()];
	
	//print
	for (auto pair : count_table)
		if (pair.first == 9) std::cout << "count in range [1, " << pair.first << "] : " << pair.second << std::endl;
		else std::cout << "count in range [9, " << pair.first << "] : " << pair.second << std::endl;
		
	return 0;
}
