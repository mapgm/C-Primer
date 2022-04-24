#include <iostream>

using namespace std;

void swapValue(int &n, int &m) 
{
	int t = n;
	n = m;
	m = t;
}

int main()
{
	int n, m;
	cin >> n >> m;
	
	swapValue(n, m);
	
	cout << n << ' ' << m << endl;
	
	return 0;
}
