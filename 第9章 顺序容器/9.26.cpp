#include <iostream>
#include <vector>
#include <list>

using namespace std;

int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};

int main()
{
	vector<int> vec(ia, end(ia));
	list<int> lst(vec.begin(), vec.end());
	
	for (auto it = lst.begin();it != lst.end(); )
		if (*it & 1)
			it = lst.erase(it);
		else 
			++it;
	
	for (auto it = vec.begin();it != vec.end(); )
		if (!(*it & 1))
			it = vec.erase(it);
		else
			++it;		
		
	for (auto x : lst) cout << x << ' ';
	cout << endl;
	for (auto x : vec) cout << x << ' ';
	cout << endl;
	
	return 0;
}
