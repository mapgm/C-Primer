#include<iostream>
#include<cstring>
#include<vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	vector<unsigned> scores(11, 0);
	unsigned grade = 0;
	
	while (cin >> grade)
	{
		if (grade <= 100)
		{
			++ *(scores.begin() + grade / 10);
		}
	}
	
	for (auto score : scores)
	{
		cout << score << endl;
	}
	
	return 0;
}
