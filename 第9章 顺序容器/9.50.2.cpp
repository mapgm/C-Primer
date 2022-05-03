#include <iostream>
#include <string>
#include <vector>

auto sum_for_double(std::vector<std::string> const& v)
{
	double sum = 0;
	for (auto const& s : v)
		sum += std::stod(s);
	return sum;
}

int main()
{
	std::vector<std::string> v = {"1.2", "2.4", "3.8", "4.5"};
	std::cout << sum_for_double(v) << std::endl;
	
	return 0;
}
