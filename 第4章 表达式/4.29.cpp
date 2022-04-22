#include <iostream>

using namespace std;

int main()
{
	int x[10];
	int *p = x;

	cout << sizeof(x)/sizeof(*x) << endl;

	cout << sizeof(p) << '/' << sizeof(*p) << endl; // 未定义行为

	return 0;
}
