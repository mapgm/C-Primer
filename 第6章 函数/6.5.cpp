#include <iostream>

using namespace std;

int myAbs(int x)
{
	if (x >= 0) return x;
	else return -x;
}

int main()
{
	int n;
	cin >> n;
	
	cout << myAbs(n) << endl;
	
	return 0;
}
