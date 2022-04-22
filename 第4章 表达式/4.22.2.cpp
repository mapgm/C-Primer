#include <iostream>

using namespace std;

int main()
{
	int score;

	while (cin >> score)
	{
		if (score > 90)
		{
			cout << "high pass" << endl;
		}
		else if (score > 75)
		{
			cout << "pass" << endl;
		}
		else if (score >= 60)
		{
			cout << "low pass" << endl;
		}
		else
		{
			cout << "fail" << endl;
		}
	}
	
	return 0;
}
