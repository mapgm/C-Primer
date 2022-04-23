#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> v1 = {1, 2, 3, 3, 4, 5, 6, 6}, v2 = {1, 2, 3};
	vector<int> v;
	
	if (v1.size() <= v2.size()) v = v1;
	else v = v2;
	
	bool flag = true;
	for (int i = 0;i < v.size();i ++)
	{
		if (v1[i] != v2[i]) flag = false;
	}
	
	if (flag) cout << "YES" << endl;
	else cout << "NO" << endl;
	
	return 0;
}
