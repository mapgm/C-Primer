#include <iostream>
#include <string>
#include <vector>

auto sum_for_int(std::vector<std::string> const& v)
{
	int sum = 0;
	for (auto const& s : v)
		sum += std::stoi(s);
	return sum;
}

int main()
{
	std::vector<std::string> v = {"1", "2", "3", "4"};
	std::cout << sum_for_int(v) << std::endl;
	
	return 0;
}
