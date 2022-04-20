#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int arr[10];
	
	for (int *i = arr;i != arr + 10;i ++)
	{
		*i = 0;
	}
	
	for (auto x : arr)
	{
		cout << x << endl;
	}
	
	return 0;
}
