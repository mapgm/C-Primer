#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int arr1[10];
	int arr2[10];
	for (int i = 0;i < 10;i ++)
	{
		arr1[i] = i;
	}
	
	for (int i = 0;i < 10;i ++)
	{
		arr2[i] = arr1[i];
	}
	
	for (auto x : arr2)
	{
		cout << x << endl;
	}
	
	return 0;
}
