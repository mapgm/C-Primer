#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int n;
	cin >> n;
	
	int sum = 0;
	for (int i = 1;i <= n;i ++)
		sum += i;
	
	cout << "Sum of 1 to " << n << " is " << sum << endl;
	
	return 0;
}
