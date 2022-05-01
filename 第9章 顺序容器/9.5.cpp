#include <iostream>
#include <vector>

std::vector<int>::const_iterator find(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end, int i)
{
	while (begin != end)
	{
		if (*begin == i) 
			return begin;
		begin ++;
	}	
	return end;
}

int main()
{
	return 0;
}
