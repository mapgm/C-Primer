#include <iostream>

using namespace std;

int main()
{
	int x = 1;
	auto f = [x](int y){return x + y;};
	
	cout << f(2) << endl;
	
	return 0;
}
