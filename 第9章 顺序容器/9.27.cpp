#include <iostream>
#include <forward_list>

int main()
{
	std::forward_list<int> lst = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	auto st = lst.begin(), pr = lst.before_begin();
	while (st != lst.end())
	{
		if (*st & 1) st = lst.erase_after(pr);
		else pr = st ++;
	}
	for (auto x : lst) std::cout << x << '\n';
	
	return 0;
}
